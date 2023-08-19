#include "UInteractiveToolPropertySet.hpp"
#include "UNewMeshMaterialProperties.hpp"
UNewMeshMaterialProperties* UNewMeshMaterialProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.NewMeshMaterialProperties");
    return (UNewMeshMaterialProperties*)res;
}
