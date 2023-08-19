#include "ECSGOperation.hpp"
#include "UCSGMeshesToolProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UCSGMeshesToolProperties* UCSGMeshesToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.CSGMeshesToolProperties");
    return (UCSGMeshesToolProperties*)res;
}
