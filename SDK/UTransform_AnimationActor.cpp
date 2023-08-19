#include "UActorProvider.hpp"
#include "UAnimationTransformProvider.hpp"
#include "UTransform_AnimationActor.hpp"
UTransform_AnimationActor* UTransform_AnimationActor::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_AnimationActor");
    return (UTransform_AnimationActor*)res;
}
