#include "UDataAsset.hpp"
#include "UOverlapEffectsClothingDataAsset.hpp"
UOverlapEffectsClothingDataAsset* UOverlapEffectsClothingDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsClothingDataAsset");
    return (UOverlapEffectsClothingDataAsset*)res;
}
