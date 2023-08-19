#include "UAssetImportData.hpp"
#include "UDatasmithAssetImportData.hpp"
UDatasmithAssetImportData* UDatasmithAssetImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithAssetImportData");
    return (UDatasmithAssetImportData*)res;
}
