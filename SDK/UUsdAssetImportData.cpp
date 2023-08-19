#include "UAssetImportData.hpp"
#include "UObject.hpp"
#include "UUsdAssetImportData.hpp"
UUsdAssetImportData* UUsdAssetImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/USDClasses.UsdAssetImportData");
    return (UUsdAssetImportData*)res;
}
