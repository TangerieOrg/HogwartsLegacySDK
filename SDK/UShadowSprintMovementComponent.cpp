#include "UFunction.hpp"
#include "UMovementComponent.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
#include "UShadowSprintData.hpp"
#include "UShadowSprintMovementComponent.hpp"
UShadowSprintMovementComponent* UShadowSprintMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ShadowSprintMovementComponent");
    return (UShadowSprintMovementComponent*)res;
}
void UShadowSprintMovementComponent::SetVerticalImpulse(float Val) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ShadowSprintMovementComponent.SetVerticalImpulse"));
    struct Params_SetVerticalImpulse {
        float Val; // 0x0
    }; // Size: 0x4
    Params_SetVerticalImpulse params{};
    params.Val = (float)Val;
    ProcessEvent(func, &params);
}
