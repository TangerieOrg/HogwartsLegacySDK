#include "UBaseSmoothBrushOpProps.hpp"
#include "USmoothBrushOpProps.hpp"
USmoothBrushOpProps* USmoothBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SmoothBrushOpProps");
    return (USmoothBrushOpProps*)res;
}
