#include "UAssetImportData.hpp"
#include "UGroomAssetImportData.hpp"
#include "UGroomImportOptions.hpp"
UGroomAssetImportData* UGroomAssetImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomAssetImportData");
    return (UGroomAssetImportData*)res;
}
