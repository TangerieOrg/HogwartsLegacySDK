#include "EPlaneBrushSideMode.hpp"
#include "UFlattenBrushOpProps.hpp"
#include "UMeshSculptBrushOpProps.hpp"
UFlattenBrushOpProps* UFlattenBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.FlattenBrushOpProps");
    return (UFlattenBrushOpProps*)res;
}
