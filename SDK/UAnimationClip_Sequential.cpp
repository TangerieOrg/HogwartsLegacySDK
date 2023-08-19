#include "UAnimationClipProvider.hpp"
#include "UAnimationClip_Sequential.hpp"
UAnimationClip_Sequential* UAnimationClip_Sequential::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationClip_Sequential");
    return (UAnimationClip_Sequential*)res;
}
