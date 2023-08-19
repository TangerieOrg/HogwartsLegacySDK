#include "UAnimationAsset.hpp"
#include "UAnimationAsset_Direct.hpp"
#include "UAnimationProvider.hpp"
UAnimationAsset_Direct* UAnimationAsset_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationAsset_Direct");
    return (UAnimationAsset_Direct*)res;
}
