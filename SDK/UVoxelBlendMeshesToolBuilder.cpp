#include "UBaseCreateFromSelectedToolBuilder.hpp"
#include "UVoxelBlendMeshesToolBuilder.hpp"
UVoxelBlendMeshesToolBuilder* UVoxelBlendMeshesToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.VoxelBlendMeshesToolBuilder");
    return (UVoxelBlendMeshesToolBuilder*)res;
}
