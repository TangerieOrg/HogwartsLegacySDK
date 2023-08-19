#include "FAkCommonInitializationSettings.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "FAkXSXAdvancedInitializationSettings.hpp"
#include "FAkXSXApuHeapInitializationSettings.hpp"
#include "UAkXSXInitializationSettings.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAkXSXInitializationSettings* UAkXSXInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkXSXInitializationSettings");
    return (UAkXSXInitializationSettings*)res;
}
void UAkXSXInitializationSettings::MigrateMultiCoreRendering(bool NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering"));
    struct Params_MigrateMultiCoreRendering {
        bool NewValue; // 0x0
    }; // Size: 0x1
    Params_MigrateMultiCoreRendering params{};
    params.NewValue = (bool)NewValue;
    ProcessEvent(func, &params);
}
