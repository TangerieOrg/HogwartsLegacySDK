#include "FVector.hpp"
#include "UFunction.hpp"
#include "UGizmoAxisSource.hpp"
#include "UInterface.hpp"
UGizmoAxisSource* UGizmoAxisSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoAxisSource");
    return (UGizmoAxisSource*)res;
}
bool UGizmoAxisSource::HasTangentVectors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors"));
    struct Params_HasTangentVectors {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasTangentVectors params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGizmoAxisSource::GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut) {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors"));
    struct Params_GetTangentVectors {
        FVector TangentXOut; // 0x0
        FVector TangentYOut; // 0xc
    }; // Size: 0x18
    Params_GetTangentVectors params{};
    params.TangentXOut = (FVector)TangentXOut;
    params.TangentYOut = (FVector)TangentYOut;
    ProcessEvent(func, &params);
    TangentXOut = params.TangentXOut;
    TangentYOut = params.TangentYOut;
}
FVector UGizmoAxisSource::GetOrigin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetOrigin"));
    struct Params_GetOrigin {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetOrigin params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UGizmoAxisSource::GetDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetDirection"));
    struct Params_GetDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
