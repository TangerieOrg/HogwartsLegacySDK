#include "FGameplayTagContainer.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "UAnimationClipProvider.hpp"
#include "UAnimationClip_TagLookupOnAssets.hpp"
#include "UBaseArchitectFilter.hpp"
UAnimationClip_TagLookupOnAssets* UAnimationClip_TagLookupOnAssets::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationClip_TagLookupOnAssets");
    return (UAnimationClip_TagLookupOnAssets*)res;
}
