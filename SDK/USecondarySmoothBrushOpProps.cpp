#include "UBaseSmoothBrushOpProps.hpp"
#include "USecondarySmoothBrushOpProps.hpp"
USecondarySmoothBrushOpProps* USecondarySmoothBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SecondarySmoothBrushOpProps");
    return (USecondarySmoothBrushOpProps*)res;
}
