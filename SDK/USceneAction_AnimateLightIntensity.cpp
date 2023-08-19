#include "EAnimateLightColorIntensityBlend.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_AnimateLightColorIntensity.hpp"
#include "USceneAction_AnimateLightIntensity.hpp"
USceneAction_AnimateLightIntensity* USceneAction_AnimateLightIntensity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AnimateLightIntensity");
    return (USceneAction_AnimateLightIntensity*)res;
}
