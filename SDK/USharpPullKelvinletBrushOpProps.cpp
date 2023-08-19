#include "UBaseKelvinletBrushOpProps.hpp"
#include "USharpPullKelvinletBrushOpProps.hpp"
USharpPullKelvinletBrushOpProps* USharpPullKelvinletBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SharpPullKelvinletBrushOpProps");
    return (USharpPullKelvinletBrushOpProps*)res;
}
