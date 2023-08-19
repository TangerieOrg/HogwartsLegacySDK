#include "UAddDiscPrimitiveTool.hpp"
#include "UAddPrimitiveTool.hpp"
UAddDiscPrimitiveTool* UAddDiscPrimitiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddDiscPrimitiveTool");
    return (UAddDiscPrimitiveTool*)res;
}
