#include "ECollisionChannel.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USpringArmComponent.hpp"
USpringArmComponent* USpringArmComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SpringArmComponent");
    return (USpringArmComponent*)res;
}
bool USpringArmComponent::IsCollisionFixApplied() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SpringArmComponent.IsCollisionFixApplied"));
    struct Params_IsCollisionFixApplied {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCollisionFixApplied params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector USpringArmComponent::GetUnfixedCameraPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SpringArmComponent.GetUnfixedCameraPosition"));
    struct Params_GetUnfixedCameraPosition {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetUnfixedCameraPosition params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator USpringArmComponent::GetTargetRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SpringArmComponent.GetTargetRotation"));
    struct Params_GetTargetRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetTargetRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
