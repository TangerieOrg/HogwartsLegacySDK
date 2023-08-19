#include "UDatasmithStaticMeshGLTFImportData.hpp"
#include "UDatasmithStaticMeshImportData.hpp"
UDatasmithStaticMeshGLTFImportData* UDatasmithStaticMeshGLTFImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithStaticMeshGLTFImportData");
    return (UDatasmithStaticMeshGLTFImportData*)res;
}
