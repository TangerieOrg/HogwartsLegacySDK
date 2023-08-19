#include "UMeshSculptBrushOpProps.hpp"
#include "UStandardSculptBrushOpProps.hpp"
UStandardSculptBrushOpProps* UStandardSculptBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.StandardSculptBrushOpProps");
    return (UStandardSculptBrushOpProps*)res;
}
