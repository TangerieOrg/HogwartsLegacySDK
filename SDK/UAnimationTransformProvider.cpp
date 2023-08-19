#include "UAnimationClipProvider.hpp"
#include "UAnimationTransformProvider.hpp"
#include "UTransformProvider.hpp"
UAnimationTransformProvider* UAnimationTransformProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationTransformProvider");
    return (UAnimationTransformProvider*)res;
}
