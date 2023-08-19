#include "UDatasmithStaticMeshCADImportData.hpp"
#include "UDatasmithStaticMeshImportData.hpp"
UDatasmithStaticMeshCADImportData* UDatasmithStaticMeshCADImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithStaticMeshCADImportData");
    return (UDatasmithStaticMeshCADImportData*)res;
}
