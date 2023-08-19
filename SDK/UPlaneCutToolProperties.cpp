#include "UInteractiveToolPropertySet.hpp"
#include "UPlaneCutToolProperties.hpp"
UPlaneCutToolProperties* UPlaneCutToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PlaneCutToolProperties");
    return (UPlaneCutToolProperties*)res;
}
