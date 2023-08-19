#pragma once
#include <cstdint>
#include "UNPC_PathFollowingComponent.hpp"
class APawn;
class UEnemyAIComponent;
class UCharacterMovementComponent;
class AAIController;
class UActorComponent;
#pragma pack(push, 1)
class UEnemyAIPathFollowingComponent : public UNPC_PathFollowingComponent {
public:
    char pad_390[0x68];
    APawn* PawnPtr; // 0x3f8
    UCharacterMovementComponent* CharacterMoveCompPtr; // 0x400
    UEnemyAIComponent* EnemyCompPtr; // 0x408
    AAIController* ControllerPtr; // 0x410
    char pad_418[0x18];
    static UEnemyAIPathFollowingComponent* StaticClass();
    void HandleComponentDeactivated(UActorComponent* InComponent);
    void HandleComponentActivated(UActorComponent* InComponent, bool InSuccess);
}; // Size: 0x430
#pragma pack(pop)
