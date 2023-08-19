#include "EAnimateLightColorIntensityBlend.hpp"
#include "FLinearColor.hpp"
#include "FRuntimeCurveLinearColor.hpp"
#include "USceneAction_AnimateLightColor.hpp"
#include "USceneAction_AnimateLightColorIntensity.hpp"
USceneAction_AnimateLightColor* USceneAction_AnimateLightColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AnimateLightColor");
    return (USceneAction_AnimateLightColor*)res;
}
