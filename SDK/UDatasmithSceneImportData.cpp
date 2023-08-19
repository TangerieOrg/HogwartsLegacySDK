#include "UAssetImportData.hpp"
#include "UDatasmithSceneImportData.hpp"
UDatasmithSceneImportData* UDatasmithSceneImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithSceneImportData");
    return (UDatasmithSceneImportData*)res;
}
