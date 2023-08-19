#include "UAddPrimitiveTool.hpp"
#include "UAddPuncturedDiscPrimitiveTool.hpp"
UAddPuncturedDiscPrimitiveTool* UAddPuncturedDiscPrimitiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddPuncturedDiscPrimitiveTool");
    return (UAddPuncturedDiscPrimitiveTool*)res;
}
