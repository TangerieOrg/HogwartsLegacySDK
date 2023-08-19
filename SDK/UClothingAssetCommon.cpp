#include "FClothLODDataCommon.hpp"
#include "UClothingAssetBase.hpp"
#include "UClothingAssetCommon.hpp"
#include "UClothingAssetCustomData.hpp"
#include "UPhysicsAsset.hpp"
UClothingAssetCommon* UClothingAssetCommon::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCommon");
    return (UClothingAssetCommon*)res;
}
