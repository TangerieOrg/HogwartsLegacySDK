#include "UDatasmithFBXSceneImportData.hpp"
#include "UDatasmithSceneImportData.hpp"
UDatasmithFBXSceneImportData* UDatasmithFBXSceneImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithFBXSceneImportData");
    return (UDatasmithFBXSceneImportData*)res;
}
