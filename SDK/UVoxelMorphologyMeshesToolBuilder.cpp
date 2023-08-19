#include "UBaseCreateFromSelectedToolBuilder.hpp"
#include "UVoxelMorphologyMeshesToolBuilder.hpp"
UVoxelMorphologyMeshesToolBuilder* UVoxelMorphologyMeshesToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.VoxelMorphologyMeshesToolBuilder");
    return (UVoxelMorphologyMeshesToolBuilder*)res;
}
