#include "FGameplayTagContainer.hpp"
#include "UActorProvider.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "UAnimationAsset_TagLookup.hpp"
#include "UAnimationProvider.hpp"
UAnimationAsset_TagLookup* UAnimationAsset_TagLookup::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationAsset_TagLookup");
    return (UAnimationAsset_TagLookup*)res;
}
