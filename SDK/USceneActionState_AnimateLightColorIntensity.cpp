#include "USceneActionState_AnimateLightColorIntensity.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_AnimateLightColorIntensity* USceneActionState_AnimateLightColorIntensity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_AnimateLightColorIntensity");
    return (USceneActionState_AnimateLightColorIntensity*)res;
}
