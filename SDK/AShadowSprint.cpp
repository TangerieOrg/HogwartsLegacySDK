#include "AActor.hpp"
#include "AShadowSprint.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UShadowSprintMovementComponent.hpp"
AShadowSprint* AShadowSprint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ShadowSprint");
    return (AShadowSprint*)res;
}
void AShadowSprint::SetScaleInfo(bool bInScaleIn, float InActiveScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ShadowSprint.SetScaleInfo"));
    struct Params_SetScaleInfo {
        bool bInScaleIn; // 0x0
        char pad_1[0x3];
        float InActiveScale; // 0x4
    }; // Size: 0x8
    Params_SetScaleInfo params{};
    params.bInScaleIn = (bool)bInScaleIn;
    params.InActiveScale = (float)InActiveScale;
    ProcessEvent(func, &params);
}
UCapsuleComponent* AShadowSprint::GetCapsuleComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ShadowSprint.GetCapsuleComponent"));
    struct Params_GetCapsuleComponent {
        UCapsuleComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCapsuleComponent params{};
    ProcessEvent(func, &params);
    return (UCapsuleComponent*)params.ReturnValue;
}
