#include "UDatasmithStaticMeshIFCImportData.hpp"
#include "UDatasmithStaticMeshImportData.hpp"
UDatasmithStaticMeshIFCImportData* UDatasmithStaticMeshIFCImportData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithStaticMeshIFCImportData");
    return (UDatasmithStaticMeshIFCImportData*)res;
}
