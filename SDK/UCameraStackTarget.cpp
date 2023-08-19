#include "AActor.hpp"
#include "FVector.hpp"
#include "UCameraStackTarget.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCameraStackTarget* UCameraStackTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackTarget");
    return (UCameraStackTarget*)res;
}
bool UCameraStackTarget::IsWorldCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackTarget.IsWorldCamera"));
    struct Params_IsWorldCamera {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsWorldCamera params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UCameraStackTarget::GetTargetVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackTarget.GetTargetVelocity"));
    struct Params_GetTargetVelocity {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetTargetVelocity params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
AActor* UCameraStackTarget::GetTargetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackTarget.GetTargetActor"));
    struct Params_GetTargetActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTargetActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
