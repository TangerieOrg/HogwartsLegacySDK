#include "UAnimationTransformProvider.hpp"
#include "UTransform_AnimationRoot.hpp"
UTransform_AnimationRoot* UTransform_AnimationRoot::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_AnimationRoot");
    return (UTransform_AnimationRoot*)res;
}
