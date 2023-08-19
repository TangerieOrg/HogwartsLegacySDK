#include "UBaseCreateFromSelectedTool.hpp"
#include "UBaseVoxelTool.hpp"
#include "UVoxelProperties.hpp"
UBaseVoxelTool* UBaseVoxelTool::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.BaseVoxelTool");
    return (UBaseVoxelTool*)res;
}
