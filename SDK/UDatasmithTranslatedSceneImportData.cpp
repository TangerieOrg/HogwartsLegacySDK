#include "UDatasmithSceneImportData.hpp"
#include "UDatasmithTranslatedSceneImportData.hpp"
UDatasmithTranslatedSceneImportData* UDatasmithTranslatedSceneImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithTranslatedSceneImportData");
    return (UDatasmithTranslatedSceneImportData*)res;
}
