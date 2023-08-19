#include "EPlaneBrushSideMode.hpp"
#include "UBasePlaneBrushOpProps.hpp"
#include "UPlaneBrushOpProps.hpp"
UPlaneBrushOpProps* UPlaneBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PlaneBrushOpProps");
    return (UPlaneBrushOpProps*)res;
}
