#include "UAnimationClipProvider.hpp"
#include "UAnimationProvider.hpp"
UAnimationClipProvider* UAnimationClipProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationClipProvider");
    return (UAnimationClipProvider*)res;
}
