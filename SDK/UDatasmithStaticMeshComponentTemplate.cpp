#include "UDatasmithObjectTemplate.hpp"
#include "UDatasmithStaticMeshComponentTemplate.hpp"
#include "UMaterialInterface.hpp"
#include "UStaticMesh.hpp"
UDatasmithStaticMeshComponentTemplate* UDatasmithStaticMeshComponentTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithStaticMeshComponentTemplate");
    return (UDatasmithStaticMeshComponentTemplate*)res;
}
