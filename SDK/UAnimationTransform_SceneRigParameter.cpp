#include "FSceneRigParameterBinding_AnimationTransform.hpp"
#include "UAnimationTransformProvider.hpp"
#include "UAnimationTransform_SceneRigParameter.hpp"
UAnimationTransform_SceneRigParameter* UAnimationTransform_SceneRigParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.AnimationTransform_SceneRigParameter");
    return (UAnimationTransform_SceneRigParameter*)res;
}
