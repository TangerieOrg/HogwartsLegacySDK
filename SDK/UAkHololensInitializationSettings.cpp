#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "FAkHololensAdvancedInitializationSettings.hpp"
#include "UAkHololensInitializationSettings.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAkHololensInitializationSettings* UAkHololensInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkHololensInitializationSettings");
    return (UAkHololensInitializationSettings*)res;
}
void UAkHololensInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering"));
    struct Params_MigrateMultiCoreRendering {
        bool NewValue; // 0x0
    }; // Size: 0x1
    Params_MigrateMultiCoreRendering params{};
    params.NewValue = (bool)NewValue;
    ProcessEvent(func, &params);
}
