#include "FAkAndroidAdvancedInitializationSettings.hpp"
#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "UAkAndroidInitializationSettings.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering"));
    struct Params_MigrateMultiCoreRendering {
        bool NewValue; // 0x0
    }; // Size: 0x1
    Params_MigrateMultiCoreRendering params{};
    params.NewValue = (bool)NewValue;
    ProcessEvent(func, &params);
}
UAkAndroidInitializationSettings* UAkAndroidInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAndroidInitializationSettings");
    return (UAkAndroidInitializationSettings*)res;
}
