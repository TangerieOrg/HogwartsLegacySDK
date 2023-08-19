#include "FAkAdvancedInitializationSettingsWithMultiCoreRendering.hpp"
#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithCommSelection.hpp"
#include "UAkSwitchInitializationSettings.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAkSwitchInitializationSettings* UAkSwitchInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkSwitchInitializationSettings");
    return (UAkSwitchInitializationSettings*)res;
}
void UAkSwitchInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering"));
    struct Params_MigrateMultiCoreRendering {
        bool NewValue; // 0x0
    }; // Size: 0x1
    Params_MigrateMultiCoreRendering params{};
    params.NewValue = (bool)NewValue;
    ProcessEvent(func, &params);
}
