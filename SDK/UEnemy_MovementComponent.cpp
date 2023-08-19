#include "FNavAgent.hpp"
#include "FVector.hpp"
#include "UEnemy_MovementComponent.hpp"
#include "UFunction.hpp"
#include "UNPC_MovementComponent.hpp"
UEnemy_MovementComponent* UEnemy_MovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_MovementComponent");
    return (UEnemy_MovementComponent*)res;
}
void UEnemy_MovementComponent::DisableDirectionLockModifier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_MovementComponent.DisableDirectionLockModifier"));
    struct Params_DisableDirectionLockModifier {
    }; // Size: 0x0
    Params_DisableDirectionLockModifier params{};
    ProcessEvent(func, &params);
}
void UEnemy_MovementComponent::EnableDirectionLockModifier(FVector Direction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_MovementComponent.EnableDirectionLockModifier"));
    struct Params_EnableDirectionLockModifier {
        FVector Direction; // 0x0
    }; // Size: 0xc
    Params_EnableDirectionLockModifier params{};
    params.Direction = (FVector)Direction;
    ProcessEvent(func, &params);
}
