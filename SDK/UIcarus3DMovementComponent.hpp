#pragma once
#include <cstdint>
#include "EBehaviorResult\Type.hpp"
#include "FVector.hpp"
#include "UMercuna3DMovementComponent.hpp"
class UClass;
class AActor;
#pragma pack(push, 1)
class UIcarus3DMovementComponent : public UMercuna3DMovementComponent {
public:
    char pad_200[0x8];
    bool bCanEverFly; // 0x208
    char pad_209[0x2f];
    UClass* DefaultTakeOffAbility; // 0x238
    UClass* DefaultTakeOffAbilityOverride; // 0x240
    bool bStartFlying; // 0x248
    char pad_249[0x7];
    static UIcarus3DMovementComponent* StaticClass();
    void IcarusBehaviorComplete__DelegateSignature(EBehaviorResult::Type Result);
    float GetTurningCircleRadius();
    void EnableFlying();
    void DisableFlying(bool bSwitchToGroundNavigation);
    void BehaviorTakeOffStart(UClass* TakeOffAbility, bool bTeleportIfNoTakeOffAbility);
    void BehaviorStop(EBehaviorResult::Type Result);
    void BehaviorLandingLocationStart(FVector LocationToLandAt, float Height);
    void BehaviorLandingActorStart(AActor* ActorToLandAt, float Height, float ActorUpdateDistance);
    void BehaviorCircleLocationStart(FVector CircleCenterLocation, float Radius, float Height, bool bClockwise, bool bLookAtCirclingLocation, float LookAtMaxPitch);
    void BehaviorCircleActorStart(AActor* CircleCenterActor, float Radius, float Height, bool bClockwise, bool bLookAtCirclingActor, float LookAtMaxPitch, float ActorUpdateDistance);
}; // Size: 0x250
#pragma pack(pop)
