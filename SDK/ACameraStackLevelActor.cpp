#include "AActor.hpp"
#include "ACameraStackActor.hpp"
#include "ACameraStackLevelActor.hpp"
#include "FCameraPreUpdateTickFunction.hpp"
#include "UFunction.hpp"
ACameraStackLevelActor* ACameraStackLevelActor::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackLevelActor");
    return (ACameraStackLevelActor*)res;
}
void ACameraStackLevelActor::SetRuntimeTarget(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLevelActor.SetRuntimeTarget"));
    struct Params_SetRuntimeTarget {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_SetRuntimeTarget params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
AActor* ACameraStackLevelActor::GetRuntimeTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLevelActor.GetRuntimeTarget"));
    struct Params_GetRuntimeTarget {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRuntimeTarget params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
