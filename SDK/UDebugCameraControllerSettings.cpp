#include "FDebugCameraControllerSettingsViewModeIndex.hpp"
#include "UDebugCameraControllerSettings.hpp"
#include "UDeveloperSettings.hpp"
UDebugCameraControllerSettings* UDebugCameraControllerSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DebugCameraControllerSettings");
    return (UDebugCameraControllerSettings*)res;
}
