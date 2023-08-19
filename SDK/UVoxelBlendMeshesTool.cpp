#include "UBaseVoxelTool.hpp"
#include "UVoxelBlendMeshesTool.hpp"
#include "UVoxelBlendMeshesToolProperties.hpp"
UVoxelBlendMeshesTool* UVoxelBlendMeshesTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.VoxelBlendMeshesTool");
    return (UVoxelBlendMeshesTool*)res;
}
