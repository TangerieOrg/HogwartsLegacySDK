#include "FAnimationClip_RandomEntry.hpp"
#include "UAnimationClipProvider.hpp"
#include "UAnimationClip_Random.hpp"
UAnimationClip_Random* UAnimationClip_Random::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationClip_Random");
    return (UAnimationClip_Random*)res;
}
