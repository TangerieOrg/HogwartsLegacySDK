#include "UAnimationTransformProvider.hpp"
#include "UTransform_AnimationBone.hpp"
UTransform_AnimationBone* UTransform_AnimationBone::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_AnimationBone");
    return (UTransform_AnimationBone*)res;
}
