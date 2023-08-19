#include "UAddArrowPrimitiveTool.hpp"
#include "UAddPrimitiveTool.hpp"
UAddArrowPrimitiveTool* UAddArrowPrimitiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddArrowPrimitiveTool");
    return (UAddArrowPrimitiveTool*)res;
}
