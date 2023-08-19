#include "UBasePlaneBrushOpProps.hpp"
#include "UMeshSculptBrushOpProps.hpp"
UBasePlaneBrushOpProps* UBasePlaneBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BasePlaneBrushOpProps");
    return (UBasePlaneBrushOpProps*)res;
}
