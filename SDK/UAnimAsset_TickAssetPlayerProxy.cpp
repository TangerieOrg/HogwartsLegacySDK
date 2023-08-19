#include "FTickAssetPlayerProxy_WeightedNotify.hpp"
#include "FTransform.hpp"
#include "UAnimAsset_TickAssetPlayerProxy.hpp"
#include "UAnimationAsset.hpp"
UAnimAsset_TickAssetPlayerProxy* UAnimAsset_TickAssetPlayerProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimAsset_TickAssetPlayerProxy");
    return (UAnimAsset_TickAssetPlayerProxy*)res;
}
