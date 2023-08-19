#include "FRotator.hpp"
#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorShake.hpp"
#include "UFunction.hpp"
void UCameraStackBehaviorShake::AddTrauma(float InTrauma) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorShake.AddTrauma"));
    struct Params_AddTrauma {
        float InTrauma; // 0x0
    }; // Size: 0x4
    Params_AddTrauma params{};
    params.InTrauma = (float)InTrauma;
    ProcessEvent(func, &params);
}
UCameraStackBehaviorShake* UCameraStackBehaviorShake::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorShake");
    return (UCameraStackBehaviorShake*)res;
}
