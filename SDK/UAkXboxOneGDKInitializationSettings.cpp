#include "FAkCommonInitializationSettings.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "FAkXboxOneGDKAdvancedInitializationSettings.hpp"
#include "FAkXboxOneGDKApuHeapInitializationSettings.hpp"
#include "UAkXboxOneGDKInitializationSettings.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAkXboxOneGDKInitializationSettings* UAkXboxOneGDKInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkXboxOneGDKInitializationSettings");
    return (UAkXboxOneGDKInitializationSettings*)res;
}
void UAkXboxOneGDKInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering"));
    struct Params_MigrateMultiCoreRendering {
        bool NewValue; // 0x0
    }; // Size: 0x1
    Params_MigrateMultiCoreRendering params{};
    params.NewValue = (bool)NewValue;
    ProcessEvent(func, &params);
}
