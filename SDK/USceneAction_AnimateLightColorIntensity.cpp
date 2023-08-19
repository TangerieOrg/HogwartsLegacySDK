#include "USceneAction_AnimateLightColorIntensity.hpp"
#include "USceneAction_SpawnActorAllowAsChild.hpp"
USceneAction_AnimateLightColorIntensity* USceneAction_AnimateLightColorIntensity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AnimateLightColorIntensity");
    return (USceneAction_AnimateLightColorIntensity*)res;
}
