#include "EPlaneBrushSideMode.hpp"
#include "UBasePlaneBrushOpProps.hpp"
#include "UViewAlignedPlaneBrushOpProps.hpp"
UViewAlignedPlaneBrushOpProps* UViewAlignedPlaneBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ViewAlignedPlaneBrushOpProps");
    return (UViewAlignedPlaneBrushOpProps*)res;
}
