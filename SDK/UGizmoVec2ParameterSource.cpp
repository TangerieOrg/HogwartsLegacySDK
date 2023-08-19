#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UGizmoVec2ParameterSource.hpp"
#include "UInterface.hpp"
void UGizmoVec2ParameterSource::BeginModify() {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify"));
    struct Params_BeginModify {
    }; // Size: 0x0
    Params_BeginModify params{};
    ProcessEvent(func, &params);
}
UGizmoVec2ParameterSource* UGizmoVec2ParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoVec2ParameterSource");
    return (UGizmoVec2ParameterSource*)res;
}
void UGizmoVec2ParameterSource::SetParameter(FVector2D& NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter"));
    struct Params_SetParameter {
        FVector2D NewValue; // 0x0
    }; // Size: 0x8
    Params_SetParameter params{};
    params.NewValue = (FVector2D)NewValue;
    ProcessEvent(func, &params);
    NewValue = params.NewValue;
}
FVector2D UGizmoVec2ParameterSource::GetParameter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter"));
    struct Params_GetParameter {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetParameter params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UGizmoVec2ParameterSource::EndModify() {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify"));
    struct Params_EndModify {
    }; // Size: 0x0
    Params_EndModify params{};
    ProcessEvent(func, &params);
}
