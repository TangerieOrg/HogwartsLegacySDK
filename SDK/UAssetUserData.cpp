#include "UAssetUserData.hpp"
#include "UObject.hpp"
UAssetUserData* UAssetUserData::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AssetUserData");
    return (UAssetUserData*)res;
}
