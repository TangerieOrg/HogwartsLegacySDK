#include "UBaseKelvinletBrushOpProps.hpp"
#include "UPullKelvinletBrushOpProps.hpp"
UPullKelvinletBrushOpProps* UPullKelvinletBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PullKelvinletBrushOpProps");
    return (UPullKelvinletBrushOpProps*)res;
}
