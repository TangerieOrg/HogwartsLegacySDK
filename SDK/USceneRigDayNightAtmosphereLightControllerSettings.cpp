#include "EDayNightLightControllerOp.hpp"
#include "FDayNightLightSkyAtmosphereComputeParams.hpp"
#include "UCurveFloat.hpp"
#include "USceneActionDayNightLightControllerSettings.hpp"
#include "USceneRigDayNightAtmosphereLightControllerSettings.hpp"
USceneRigDayNightAtmosphereLightControllerSettings* USceneRigDayNightAtmosphereLightControllerSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigDayNightAtmosphereLightControllerSettings");
    return (USceneRigDayNightAtmosphereLightControllerSettings*)res;
}
