#include "UFunction.hpp"
#include "UGizmoFloatParameterSource.hpp"
#include "UInterface.hpp"
float UGizmoFloatParameterSource::GetParameter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter"));
    struct Params_GetParameter {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetParameter params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UGizmoFloatParameterSource* UGizmoFloatParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoFloatParameterSource");
    return (UGizmoFloatParameterSource*)res;
}
void UGizmoFloatParameterSource::EndModify() {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.EndModify"));
    struct Params_EndModify {
    }; // Size: 0x0
    Params_EndModify params{};
    ProcessEvent(func, &params);
}
void UGizmoFloatParameterSource::SetParameter(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter"));
    struct Params_SetParameter {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetParameter params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UGizmoFloatParameterSource::BeginModify() {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify"));
    struct Params_BeginModify {
    }; // Size: 0x0
    Params_BeginModify params{};
    ProcessEvent(func, &params);
}
