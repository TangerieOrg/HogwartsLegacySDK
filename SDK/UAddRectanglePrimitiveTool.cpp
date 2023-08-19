#include "UAddPrimitiveTool.hpp"
#include "UAddRectanglePrimitiveTool.hpp"
UAddRectanglePrimitiveTool* UAddRectanglePrimitiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddRectanglePrimitiveTool");
    return (UAddRectanglePrimitiveTool*)res;
}
