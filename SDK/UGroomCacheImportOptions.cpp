#include "FGroomCacheImportSettings.hpp"
#include "UGroomCacheImportOptions.hpp"
#include "UObject.hpp"
UGroomCacheImportOptions* UGroomCacheImportOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomCacheImportOptions");
    return (UGroomCacheImportOptions*)res;
}
