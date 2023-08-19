#include "UBaseKelvinletBrushOpProps.hpp"
#include "UTwistKelvinletBrushOpProps.hpp"
UTwistKelvinletBrushOpProps* UTwistKelvinletBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.TwistKelvinletBrushOpProps");
    return (UTwistKelvinletBrushOpProps*)res;
}
