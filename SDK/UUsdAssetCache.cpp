#include "UObject.hpp"
#include "UUsdAssetCache.hpp"
UUsdAssetCache* UUsdAssetCache::StaticClass() {
    static auto res = find_uobject("Class /Script/USDClasses.UsdAssetCache");
    return (UUsdAssetCache*)res;
}
