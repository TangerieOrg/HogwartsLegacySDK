#include "UDatasmithGLTFSceneImportData.hpp"
#include "UDatasmithSceneImportData.hpp"
UDatasmithGLTFSceneImportData* UDatasmithGLTFSceneImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithGLTFSceneImportData");
    return (UDatasmithGLTFSceneImportData*)res;
}
