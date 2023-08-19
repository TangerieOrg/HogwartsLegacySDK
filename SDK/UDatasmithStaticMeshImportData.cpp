#include "UDatasmithAssetImportData.hpp"
#include "UDatasmithStaticMeshImportData.hpp"
UDatasmithStaticMeshImportData* UDatasmithStaticMeshImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithStaticMeshImportData");
    return (UDatasmithStaticMeshImportData*)res;
}
