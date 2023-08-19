#include "UBaseVoxelTool.hpp"
#include "UVoxelSolidifyMeshesTool.hpp"
#include "UVoxelSolidifyMeshesToolProperties.hpp"
UVoxelSolidifyMeshesTool* UVoxelSolidifyMeshesTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.VoxelSolidifyMeshesTool");
    return (UVoxelSolidifyMeshesTool*)res;
}
