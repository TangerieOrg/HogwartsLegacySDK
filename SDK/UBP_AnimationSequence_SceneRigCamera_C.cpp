#include "UBP_AnimationSequence_SceneRigCamera_C.hpp"
#include "UCameraStackBehaviorAnimationSequence.hpp"
UBP_AnimationSequence_SceneRigCamera_C* UBP_AnimationSequence_SceneRigCamera_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_AnimationSequence_SceneRigCamera.BP_AnimationSequence_SceneRigCamera_C");
    return (UBP_AnimationSequence_SceneRigCamera_C*)res;
}
