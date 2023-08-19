#include "UDatasmithAssetImportData.hpp"
#include "UDatasmithVREDAssetImportData.hpp"
UDatasmithVREDAssetImportData* UDatasmithVREDAssetImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithVREDAssetImportData");
    return (UDatasmithVREDAssetImportData*)res;
}
