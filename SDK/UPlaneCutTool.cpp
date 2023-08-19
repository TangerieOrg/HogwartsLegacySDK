#include "FQuat.hpp"
#include "FVector.hpp"
#include "UAcceptOutputProperties.hpp"
#include "UDynamicMeshReplacementChangeTarget.hpp"
#include "UFunction.hpp"
#include "UMeshOpPreviewWithBackgroundCompute.hpp"
#include "UMultiSelectionTool.hpp"
#include "UPlaneCutTool.hpp"
#include "UPlaneCutToolProperties.hpp"
#include "UTransformGizmo.hpp"
#include "UTransformProxy.hpp"
UPlaneCutTool* UPlaneCutTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PlaneCutTool");
    return (UPlaneCutTool*)res;
}
void UPlaneCutTool::Cut() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.PlaneCutTool.Cut"));
    struct Params_Cut {
    }; // Size: 0x0
    Params_Cut params{};
    ProcessEvent(func, &params);
}
