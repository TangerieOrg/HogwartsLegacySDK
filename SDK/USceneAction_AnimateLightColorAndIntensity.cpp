#include "EAnimateLightColorIntensityBlend.hpp"
#include "FRuntimeCurveLinearColor.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_AnimateLightColorAndIntensity.hpp"
#include "USceneAction_AnimateLightColorIntensity.hpp"
USceneAction_AnimateLightColorAndIntensity* USceneAction_AnimateLightColorAndIntensity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AnimateLightColorAndIntensity");
    return (USceneAction_AnimateLightColorAndIntensity*)res;
}
