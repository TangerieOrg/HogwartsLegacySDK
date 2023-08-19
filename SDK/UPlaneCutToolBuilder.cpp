#include "UInteractiveToolBuilder.hpp"
#include "UPlaneCutToolBuilder.hpp"
UPlaneCutToolBuilder* UPlaneCutToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PlaneCutToolBuilder");
    return (UPlaneCutToolBuilder*)res;
}
