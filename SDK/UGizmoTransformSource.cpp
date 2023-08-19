#include "FTransform.hpp"
#include "UFunction.hpp"
#include "UGizmoTransformSource.hpp"
#include "UInterface.hpp"
UGizmoTransformSource* UGizmoTransformSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoTransformSource");
    return (UGizmoTransformSource*)res;
}
void UGizmoTransformSource::SetTransform(FTransform& NewTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoTransformSource.SetTransform"));
    struct Params_SetTransform {
        FTransform NewTransform; // 0x0
    }; // Size: 0x30
    Params_SetTransform params{};
    params.NewTransform = (FTransform)NewTransform;
    ProcessEvent(func, &params);
    NewTransform = params.NewTransform;
}
FTransform UGizmoTransformSource::GetTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoTransformSource.GetTransform"));
    struct Params_GetTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
