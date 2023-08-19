#include "UInteractiveToolPropertySet.hpp"
#include "UVoxelSolidifyMeshesToolProperties.hpp"
UVoxelSolidifyMeshesToolProperties* UVoxelSolidifyMeshesToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.VoxelSolidifyMeshesToolProperties");
    return (UVoxelSolidifyMeshesToolProperties*)res;
}
