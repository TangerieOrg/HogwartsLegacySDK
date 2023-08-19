#include "EDayNightLightControllerOp.hpp"
#include "FDayNightLightControllerDirectionalBoost.hpp"
#include "UCurveFloat.hpp"
#include "UCurveLinearColor.hpp"
#include "USceneActionDayNightLightControllerSettings.hpp"
#include "USceneRigDayNightCurveLightControllerSettings.hpp"
USceneRigDayNightCurveLightControllerSettings* USceneRigDayNightCurveLightControllerSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigDayNightCurveLightControllerSettings");
    return (USceneRigDayNightCurveLightControllerSettings*)res;
}
