#include "UActorComponent.hpp"
#include "UAnimationAsset.hpp"
#include "UFunction.hpp"
#include "UWorldEventAnimationComponent.hpp"
UWorldEventAnimationComponent* UWorldEventAnimationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventAnimationComponent");
    return (UWorldEventAnimationComponent*)res;
}
void UWorldEventAnimationComponent::SetAnimation(UAnimationAsset* InAnimation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventAnimationComponent.SetAnimation"));
    struct Params_SetAnimation {
        UAnimationAsset* InAnimation; // 0x0
    }; // Size: 0x8
    Params_SetAnimation params{};
    params.InAnimation = (UAnimationAsset*)InAnimation;
    ProcessEvent(func, &params);
}
void UWorldEventAnimationComponent::RemoveComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventAnimationComponent.RemoveComponent"));
    struct Params_RemoveComponent {
    }; // Size: 0x0
    Params_RemoveComponent params{};
    ProcessEvent(func, &params);
}
UAnimationAsset* UWorldEventAnimationComponent::GetAnimation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventAnimationComponent.GetAnimation"));
    struct Params_GetAnimation {
        UAnimationAsset* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnimation params{};
    ProcessEvent(func, &params);
    return (UAnimationAsset*)params.ReturnValue;
}
