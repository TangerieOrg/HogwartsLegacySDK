#include "UDataAsset.hpp"
#include "UOverlapEffectsDataAsset.hpp"
#include "UOverlapEffectsHandler.hpp"
UOverlapEffectsDataAsset* UOverlapEffectsDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsDataAsset");
    return (UOverlapEffectsDataAsset*)res;
}
