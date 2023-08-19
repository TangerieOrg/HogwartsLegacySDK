#include "UInteractiveToolPropertySet.hpp"
#include "UMeshSculptBrushOpProps.hpp"
UMeshSculptBrushOpProps* UMeshSculptBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshSculptBrushOpProps");
    return (UMeshSculptBrushOpProps*)res;
}
