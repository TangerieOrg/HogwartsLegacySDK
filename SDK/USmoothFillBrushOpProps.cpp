#include "UBaseSmoothBrushOpProps.hpp"
#include "USmoothFillBrushOpProps.hpp"
USmoothFillBrushOpProps* USmoothFillBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SmoothFillBrushOpProps");
    return (USmoothFillBrushOpProps*)res;
}
