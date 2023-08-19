#include "UMeshSculptBrushOpProps.hpp"
#include "USculptMaxBrushOpProps.hpp"
USculptMaxBrushOpProps* USculptMaxBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SculptMaxBrushOpProps");
    return (USculptMaxBrushOpProps*)res;
}
