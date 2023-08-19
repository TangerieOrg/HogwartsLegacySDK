#include "FAkCommonInitializationSettings.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "FAkPS4AdvancedInitializationSettings.hpp"
#include "UAkPS4InitializationSettings.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAkPS4InitializationSettings* UAkPS4InitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkPS4InitializationSettings");
    return (UAkPS4InitializationSettings*)res;
}
void UAkPS4InitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering"));
    struct Params_MigrateMultiCoreRendering {
        bool NewValue; // 0x0
    }; // Size: 0x1
    Params_MigrateMultiCoreRendering params{};
    params.NewValue = (bool)NewValue;
    ProcessEvent(func, &params);
}
