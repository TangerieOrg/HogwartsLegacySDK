#include "UCameraStack.hpp"
#include "UCameraStackSplineGetter.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USplineComponent.hpp"
USplineComponent* UCameraStackSplineGetter::GetSpline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackSplineGetter.GetSpline"));
    struct Params_GetSpline {
        USplineComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpline params{};
    ProcessEvent(func, &params);
    return (USplineComponent*)params.ReturnValue;
}
UCameraStackSplineGetter* UCameraStackSplineGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackSplineGetter");
    return (UCameraStackSplineGetter*)res;
}
void UCameraStackSplineGetter::Update(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackSplineGetter.Update"));
    struct Params_Update {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_Update params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
bool UCameraStackSplineGetter::IsValid() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackSplineGetter.IsValid"));
    struct Params_IsValid {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsValid params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCameraStackSplineGetter::Activate(UCameraStack* InList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackSplineGetter.Activate"));
    struct Params_Activate {
        UCameraStack* InList; // 0x0
    }; // Size: 0x8
    Params_Activate params{};
    params.InList = (UCameraStack*)InList;
    ProcessEvent(func, &params);
}
