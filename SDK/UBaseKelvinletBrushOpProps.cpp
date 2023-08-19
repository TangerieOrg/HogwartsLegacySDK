#include "UBaseKelvinletBrushOpProps.hpp"
#include "UMeshSculptBrushOpProps.hpp"
UBaseKelvinletBrushOpProps* UBaseKelvinletBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BaseKelvinletBrushOpProps");
    return (UBaseKelvinletBrushOpProps*)res;
}
