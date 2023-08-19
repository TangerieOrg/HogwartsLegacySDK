#include "UDatasmithCADImportSceneData.hpp"
#include "UDatasmithSceneImportData.hpp"
UDatasmithCADImportSceneData* UDatasmithCADImportSceneData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithCADImportSceneData");
    return (UDatasmithCADImportSceneData*)res;
}
