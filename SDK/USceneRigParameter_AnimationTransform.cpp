#include "UAnimationTransformProvider.hpp"
#include "USceneRigParameter.hpp"
#include "USceneRigParameter_AnimationTransform.hpp"
USceneRigParameter_AnimationTransform* USceneRigParameter_AnimationTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameter_AnimationTransform");
    return (USceneRigParameter_AnimationTransform*)res;
}
