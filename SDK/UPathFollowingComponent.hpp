#pragma once
#include <cstdint>
#include "EPathFollowingAction\Type.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UNavMovementComponent;
class ANavigationData;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class UPathFollowingComponent : public UActorComponent {
public:
    char pad_c8[0x38];
    UNavMovementComponent* MovementComp; // 0x100
    char pad_108[0x8];
    ANavigationData* MyNavData; // 0x110
    char pad_118[0x150];
    static UPathFollowingComponent* StaticClass();
    void OnNavDataRegistered(ANavigationData* NavData);
    void OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
    FVector GetPathDestination();
    EPathFollowingAction::Type GetPathActionType();
}; // Size: 0x268
#pragma pack(pop)
