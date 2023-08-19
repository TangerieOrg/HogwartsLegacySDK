#include "UMeshSculptBrushOpProps.hpp"
#include "UViewAlignedSculptBrushOpProps.hpp"
UViewAlignedSculptBrushOpProps* UViewAlignedSculptBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ViewAlignedSculptBrushOpProps");
    return (UViewAlignedSculptBrushOpProps*)res;
}
