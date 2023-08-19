#include "UBaseCreateFromSelectedToolBuilder.hpp"
#include "UVoxelSolidifyMeshesToolBuilder.hpp"
UVoxelSolidifyMeshesToolBuilder* UVoxelSolidifyMeshesToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.VoxelSolidifyMeshesToolBuilder");
    return (UVoxelSolidifyMeshesToolBuilder*)res;
}
