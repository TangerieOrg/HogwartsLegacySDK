#include "UDatasmithIFCSceneImportData.hpp"
#include "UDatasmithSceneImportData.hpp"
UDatasmithIFCSceneImportData* UDatasmithIFCSceneImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithIFCSceneImportData");
    return (UDatasmithIFCSceneImportData*)res;
}
