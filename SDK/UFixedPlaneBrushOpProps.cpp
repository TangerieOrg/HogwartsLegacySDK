#include "EPlaneBrushSideMode.hpp"
#include "UBasePlaneBrushOpProps.hpp"
#include "UFixedPlaneBrushOpProps.hpp"
UFixedPlaneBrushOpProps* UFixedPlaneBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.FixedPlaneBrushOpProps");
    return (UFixedPlaneBrushOpProps*)res;
}
