#include "UClothingAssetCustomData.hpp"
#include "UObject.hpp"
UClothingAssetCustomData* UClothingAssetCustomData::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCustomData");
    return (UClothingAssetCustomData*)res;
}
