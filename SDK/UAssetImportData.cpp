#include "UAssetImportData.hpp"
#include "UObject.hpp"
UAssetImportData* UAssetImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AssetImportData");
    return (UAssetImportData*)res;
}
