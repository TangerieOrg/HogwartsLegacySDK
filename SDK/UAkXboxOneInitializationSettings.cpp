#include "FAkCommonInitializationSettings.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "FAkXboxOneAdvancedInitializationSettings.hpp"
#include "FAkXboxOneApuHeapInitializationSettings.hpp"
#include "UAkXboxOneInitializationSettings.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAkXboxOneInitializationSettings* UAkXboxOneInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkXboxOneInitializationSettings");
    return (UAkXboxOneInitializationSettings*)res;
}
void UAkXboxOneInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering"));
    struct Params_MigrateMultiCoreRendering {
        bool NewValue; // 0x0
    }; // Size: 0x1
    Params_MigrateMultiCoreRendering params{};
    params.NewValue = (bool)NewValue;
    ProcessEvent(func, &params);
}
