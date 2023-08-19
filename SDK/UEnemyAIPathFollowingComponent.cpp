#include "AAIController.hpp"
#include "APawn.hpp"
#include "UActorComponent.hpp"
#include "UCharacterMovementComponent.hpp"
#include "UEnemyAIComponent.hpp"
#include "UEnemyAIPathFollowingComponent.hpp"
#include "UFunction.hpp"
#include "UNPC_PathFollowingComponent.hpp"
void UEnemyAIPathFollowingComponent::HandleComponentActivated(UActorComponent* InComponent, bool InSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIPathFollowingComponent.HandleComponentActivated"));
    struct Params_HandleComponentActivated {
        UActorComponent* InComponent; // 0x0
        bool InSuccess; // 0x8
    }; // Size: 0x9
    Params_HandleComponentActivated params{};
    params.InComponent = (UActorComponent*)InComponent;
    params.InSuccess = (bool)InSuccess;
    ProcessEvent(func, &params);
}
UEnemyAIPathFollowingComponent* UEnemyAIPathFollowingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIPathFollowingComponent");
    return (UEnemyAIPathFollowingComponent*)res;
}
void UEnemyAIPathFollowingComponent::HandleComponentDeactivated(UActorComponent* InComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIPathFollowingComponent.HandleComponentDeactivated"));
    struct Params_HandleComponentDeactivated {
        UActorComponent* InComponent; // 0x0
    }; // Size: 0x8
    Params_HandleComponentDeactivated params{};
    params.InComponent = (UActorComponent*)InComponent;
    ProcessEvent(func, &params);
}
