#include "FGroomCacheInfo.hpp"
#include "UGroomCache.hpp"
#include "UObject.hpp"
UGroomCache* UGroomCache::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomCache");
    return (UGroomCache*)res;
}
