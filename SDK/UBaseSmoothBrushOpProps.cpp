#include "UBaseSmoothBrushOpProps.hpp"
#include "UMeshSculptBrushOpProps.hpp"
UBaseSmoothBrushOpProps* UBaseSmoothBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BaseSmoothBrushOpProps");
    return (UBaseSmoothBrushOpProps*)res;
}
