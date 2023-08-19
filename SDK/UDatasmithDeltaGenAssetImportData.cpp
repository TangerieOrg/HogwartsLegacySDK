#include "UDatasmithAssetImportData.hpp"
#include "UDatasmithDeltaGenAssetImportData.hpp"
UDatasmithDeltaGenAssetImportData* UDatasmithDeltaGenAssetImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithDeltaGenAssetImportData");
    return (UDatasmithDeltaGenAssetImportData*)res;
}
