#include "UDatasmithMDLSceneImportData.hpp"
#include "UDatasmithSceneImportData.hpp"
UDatasmithMDLSceneImportData* UDatasmithMDLSceneImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithMDLSceneImportData");
    return (UDatasmithMDLSceneImportData*)res;
}
