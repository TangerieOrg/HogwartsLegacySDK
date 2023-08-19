#include "FGuid.hpp"
#include "UClothingAssetBase.hpp"
#include "UObject.hpp"
UClothingAssetBase* UClothingAssetBase::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeInterface.ClothingAssetBase");
    return (UClothingAssetBase*)res;
}
