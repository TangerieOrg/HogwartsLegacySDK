#include "UBaseKelvinletBrushOpProps.hpp"
#include "UScaleKelvinletBrushOpProps.hpp"
UScaleKelvinletBrushOpProps* UScaleKelvinletBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ScaleKelvinletBrushOpProps");
    return (UScaleKelvinletBrushOpProps*)res;
}
