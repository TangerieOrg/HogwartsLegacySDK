#include "AActor.hpp"
#include "UAble_MovementComponent.hpp"
#include "UCharacterMovementComponent.hpp"
#include "UFunction.hpp"
#include "URootMotionModifier.hpp"
#include "URootMotionModifierProperties.hpp"
UAble_MovementComponent* UAble_MovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.Able_MovementComponent");
    return (UAble_MovementComponent*)res;
}
void UAble_MovementComponent::RemoveRootMotionModifier(URootMotionModifierProperties* InRootMotionModifierProperties) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_MovementComponent.RemoveRootMotionModifier"));
    struct Params_RemoveRootMotionModifier {
        URootMotionModifierProperties* InRootMotionModifierProperties; // 0x0
    }; // Size: 0x8
    Params_RemoveRootMotionModifier params{};
    params.InRootMotionModifierProperties = (URootMotionModifierProperties*)InRootMotionModifierProperties;
    ProcessEvent(func, &params);
}
URootMotionModifier* UAble_MovementComponent::AddRootMotionModifier(URootMotionModifierProperties* InRootMotionModifierProperties, AActor* Instigator, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_MovementComponent.AddRootMotionModifier"));
    struct Params_AddRootMotionModifier {
        URootMotionModifierProperties* InRootMotionModifierProperties; // 0x0
        AActor* Instigator; // 0x8
        float Duration; // 0x10
        char pad_14[0x4];
        URootMotionModifier* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_AddRootMotionModifier params{};
    params.InRootMotionModifierProperties = (URootMotionModifierProperties*)InRootMotionModifierProperties;
    params.Instigator = (AActor*)Instigator;
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
    return (URootMotionModifier*)params.ReturnValue;
}
