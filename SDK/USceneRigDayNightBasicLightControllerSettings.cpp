#include "FDayNightLightControllerDirectionalBoost.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UCurveLinearColor.hpp"
#include "USceneActionDayNightLightControllerSettings.hpp"
#include "USceneRigDayNightBasicLightControllerSettings.hpp"
USceneRigDayNightBasicLightControllerSettings* USceneRigDayNightBasicLightControllerSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigDayNightBasicLightControllerSettings");
    return (USceneRigDayNightBasicLightControllerSettings*)res;
}
