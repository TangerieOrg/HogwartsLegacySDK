#include "EMorphologyOperation.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UVoxelMorphologyMeshesToolProperties.hpp"
UVoxelMorphologyMeshesToolProperties* UVoxelMorphologyMeshesToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.VoxelMorphologyMeshesToolProperties");
    return (UVoxelMorphologyMeshesToolProperties*)res;
}
