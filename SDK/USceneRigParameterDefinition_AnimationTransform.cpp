#include "UAnimationTransformProvider.hpp"
#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_AnimationTransform.hpp"
USceneRigParameterDefinition_AnimationTransform* USceneRigParameterDefinition_AnimationTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameterDefinition_AnimationTransform");
    return (USceneRigParameterDefinition_AnimationTransform*)res;
}
