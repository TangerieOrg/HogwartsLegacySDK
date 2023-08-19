#include "UDatasmithDeltaGenSceneImportData.hpp"
#include "UDatasmithFBXSceneImportData.hpp"
UDatasmithDeltaGenSceneImportData* UDatasmithDeltaGenSceneImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithDeltaGenSceneImportData");
    return (UDatasmithDeltaGenSceneImportData*)res;
}
