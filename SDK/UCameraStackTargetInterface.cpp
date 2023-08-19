#include "AActor.hpp"
#include "UCameraStackTargetInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UCameraStackTargetInterface* UCameraStackTargetInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackTargetInterface");
    return (UCameraStackTargetInterface*)res;
}
AActor* UCameraStackTargetInterface::GetRuntimeTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackTargetInterface.GetRuntimeTarget"));
    struct Params_GetRuntimeTarget {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRuntimeTarget params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
