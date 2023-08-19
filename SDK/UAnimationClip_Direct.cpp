#include "UAnimSequenceBase.hpp"
#include "UAnimationClipProvider.hpp"
#include "UAnimationClip_Direct.hpp"
UAnimationClip_Direct* UAnimationClip_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationClip_Direct");
    return (UAnimationClip_Direct*)res;
}
