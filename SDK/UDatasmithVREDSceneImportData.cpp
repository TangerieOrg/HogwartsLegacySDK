#include "UDatasmithFBXSceneImportData.hpp"
#include "UDatasmithVREDSceneImportData.hpp"
UDatasmithVREDSceneImportData* UDatasmithVREDSceneImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithVREDSceneImportData");
    return (UDatasmithVREDSceneImportData*)res;
}
