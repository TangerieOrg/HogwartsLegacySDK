#include "UAddPrimitiveTool.hpp"
#include "UAddRoundedRectanglePrimitiveTool.hpp"
UAddRoundedRectanglePrimitiveTool* UAddRoundedRectanglePrimitiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddRoundedRectanglePrimitiveTool");
    return (UAddRoundedRectanglePrimitiveTool*)res;
}
