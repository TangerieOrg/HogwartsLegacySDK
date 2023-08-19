#include "FGroomCacheImportSettings.hpp"
#include "UAssetImportData.hpp"
#include "UGroomCacheImportData.hpp"
UGroomCacheImportData* UGroomCacheImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomCacheImportData");
    return (UGroomCacheImportData*)res;
}
