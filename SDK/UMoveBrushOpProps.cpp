#include "UMeshSculptBrushOpProps.hpp"
#include "UMoveBrushOpProps.hpp"
UMoveBrushOpProps* UMoveBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MoveBrushOpProps");
    return (UMoveBrushOpProps*)res;
}
