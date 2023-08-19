#include "UAnimationClipProvider.hpp"
#include "UAnimationClip_AblAbility.hpp"
UAnimationClip_AblAbility* UAnimationClip_AblAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AnimationClip_AblAbility");
    return (UAnimationClip_AblAbility*)res;
}
