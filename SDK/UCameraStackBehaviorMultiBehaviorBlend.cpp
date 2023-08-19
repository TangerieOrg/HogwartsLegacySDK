#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorMultiBehaviorBlend.hpp"
#include "UFunction.hpp"
UCameraStackBehaviorMultiBehaviorBlend* UCameraStackBehaviorMultiBehaviorBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorMultiBehaviorBlend");
    return (UCameraStackBehaviorMultiBehaviorBlend*)res;
}
void UCameraStackBehaviorMultiBehaviorBlend::Initialize(UCameraStackBehavior* InFirstBehavior) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorMultiBehaviorBlend.Initialize"));
    struct Params_Initialize {
        UCameraStackBehavior* InFirstBehavior; // 0x0
    }; // Size: 0x8
    Params_Initialize params{};
    params.InFirstBehavior = (UCameraStackBehavior*)InFirstBehavior;
    ProcessEvent(func, &params);
}
