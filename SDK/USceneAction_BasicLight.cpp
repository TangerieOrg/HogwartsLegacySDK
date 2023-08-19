#include "FMultiLightDescription.hpp"
#include "FRuntimeCurveLinearColor.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_BasicLight.hpp"
#include "USceneRigActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_BasicLight* USceneAction_BasicLight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_BasicLight");
    return (USceneAction_BasicLight*)res;
}
