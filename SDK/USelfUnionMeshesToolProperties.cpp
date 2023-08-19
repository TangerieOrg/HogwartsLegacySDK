#include "UInteractiveToolPropertySet.hpp"
#include "USelfUnionMeshesToolProperties.hpp"
USelfUnionMeshesToolProperties* USelfUnionMeshesToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SelfUnionMeshesToolProperties");
    return (USelfUnionMeshesToolProperties*)res;
}
