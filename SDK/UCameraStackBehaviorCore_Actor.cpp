#include "AActor.hpp"
#include "UCameraStackBehaviorCore.hpp"
#include "UCameraStackBehaviorCore_Actor.hpp"
#include "UFunction.hpp"
UCameraStackBehaviorCore_Actor* UCameraStackBehaviorCore_Actor::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCore_Actor");
    return (UCameraStackBehaviorCore_Actor*)res;
}
void UCameraStackBehaviorCore_Actor::SetTransformActor(AActor* InTransformActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorCore_Actor.SetTransformActor"));
    struct Params_SetTransformActor {
        AActor* InTransformActor; // 0x0
    }; // Size: 0x8
    Params_SetTransformActor params{};
    params.InTransformActor = (AActor*)InTransformActor;
    ProcessEvent(func, &params);
}
