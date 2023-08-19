#include "FAkAdvancedInitializationSettingsWithMultiCoreRendering.hpp"
#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "UAkMacInitializationSettings.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAkMacInitializationSettings* UAkMacInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkMacInitializationSettings");
    return (UAkMacInitializationSettings*)res;
}
void UAkMacInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering"));
    struct Params_MigrateMultiCoreRendering {
        bool NewValue; // 0x0
    }; // Size: 0x1
    Params_MigrateMultiCoreRendering params{};
    params.NewValue = (bool)NewValue;
    ProcessEvent(func, &params);
}
