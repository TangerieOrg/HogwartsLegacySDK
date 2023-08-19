#include "FMovementProperties.hpp"
#include "FNavAgentProperties.hpp"
#include "UFunction.hpp"
#include "UMovementComponent.hpp"
#include "UNavMovementComponent.hpp"
#include "UObject.hpp"
bool UNavMovementComponent::IsMovingOnGround() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.NavMovementComponent.IsMovingOnGround"));
    struct Params_IsMovingOnGround {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMovingOnGround params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UNavMovementComponent* UNavMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavMovementComponent");
    return (UNavMovementComponent*)res;
}
void UNavMovementComponent::StopMovementKeepPathing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.NavMovementComponent.StopMovementKeepPathing"));
    struct Params_StopMovementKeepPathing {
    }; // Size: 0x0
    Params_StopMovementKeepPathing params{};
    ProcessEvent(func, &params);
}
void UNavMovementComponent::StopActiveMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.NavMovementComponent.StopActiveMovement"));
    struct Params_StopActiveMovement {
    }; // Size: 0x0
    Params_StopActiveMovement params{};
    ProcessEvent(func, &params);
}
bool UNavMovementComponent::IsSwimming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.NavMovementComponent.IsSwimming"));
    struct Params_IsSwimming {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSwimming params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNavMovementComponent::IsFlying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.NavMovementComponent.IsFlying"));
    struct Params_IsFlying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFlying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNavMovementComponent::IsCrouching() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.NavMovementComponent.IsCrouching"));
    struct Params_IsCrouching {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCrouching params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNavMovementComponent::IsFalling() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.NavMovementComponent.IsFalling"));
    struct Params_IsFalling {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFalling params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
