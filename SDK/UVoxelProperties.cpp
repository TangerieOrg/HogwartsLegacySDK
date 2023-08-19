#include "UInteractiveToolPropertySet.hpp"
#include "UVoxelProperties.hpp"
UVoxelProperties* UVoxelProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.VoxelProperties");
    return (UVoxelProperties*)res;
}
