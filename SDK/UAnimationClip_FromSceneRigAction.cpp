#include "UAnimationClipProvider.hpp"
#include "UAnimationClip_FromSceneRigAction.hpp"
#include "USceneRigProxyActor.hpp"
UAnimationClip_FromSceneRigAction* UAnimationClip_FromSceneRigAction::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.AnimationClip_FromSceneRigAction");
    return (UAnimationClip_FromSceneRigAction*)res;
}
