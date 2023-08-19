#include "UBaseVoxelTool.hpp"
#include "UVoxelMorphologyMeshesTool.hpp"
#include "UVoxelMorphologyMeshesToolProperties.hpp"
UVoxelMorphologyMeshesTool* UVoxelMorphologyMeshesTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.VoxelMorphologyMeshesTool");
    return (UVoxelMorphologyMeshesTool*)res;
}
