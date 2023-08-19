#include "UEraseBrushOpProps.hpp"
#include "UMeshSculptBrushOpProps.hpp"
UEraseBrushOpProps* UEraseBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EraseBrushOpProps");
    return (UEraseBrushOpProps*)res;
}
