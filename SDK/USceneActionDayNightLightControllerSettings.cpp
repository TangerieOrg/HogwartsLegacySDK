#include "UDataAsset.hpp"
#include "USceneActionDayNightLightControllerSettings.hpp"
USceneActionDayNightLightControllerSettings* USceneActionDayNightLightControllerSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionDayNightLightControllerSettings");
    return (USceneActionDayNightLightControllerSettings*)res;
}
