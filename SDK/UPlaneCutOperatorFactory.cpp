#include "UObject.hpp"
#include "UPlaneCutOperatorFactory.hpp"
#include "UPlaneCutTool.hpp"
UPlaneCutOperatorFactory* UPlaneCutOperatorFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PlaneCutOperatorFactory");
    return (UPlaneCutOperatorFactory*)res;
}
