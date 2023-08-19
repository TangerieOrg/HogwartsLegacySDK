#include "UInflateBrushOpProps.hpp"
#include "UMeshSculptBrushOpProps.hpp"
UInflateBrushOpProps* UInflateBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.InflateBrushOpProps");
    return (UInflateBrushOpProps*)res;
}
