#include "FAkAdvancedInitializationSettingsWithMultiCoreRendering.hpp"
#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "UAkLinuxInitializationSettings.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAkLinuxInitializationSettings* UAkLinuxInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkLinuxInitializationSettings");
    return (UAkLinuxInitializationSettings*)res;
}
void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering"));
    struct Params_MigrateMultiCoreRendering {
        bool NewValue; // 0x0
    }; // Size: 0x1
    Params_MigrateMultiCoreRendering params{};
    params.NewValue = (bool)NewValue;
    ProcessEvent(func, &params);
}
