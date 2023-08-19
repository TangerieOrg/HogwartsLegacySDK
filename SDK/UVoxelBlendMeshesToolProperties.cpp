#include "UInteractiveToolPropertySet.hpp"
#include "UVoxelBlendMeshesToolProperties.hpp"
UVoxelBlendMeshesToolProperties* UVoxelBlendMeshesToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.VoxelBlendMeshesToolProperties");
    return (UVoxelBlendMeshesToolProperties*)res;
}
