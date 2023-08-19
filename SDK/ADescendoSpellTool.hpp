#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
#include "FVector.hpp"
class UMultiFX2_Base;
class UClass;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class ADescendoSpellTool : public AFireOnceSpellTool {
public:
    float UpwardVelocity; // 0x870
    float ApplyForceDelay; // 0x874
    float PushToGroundDelay; // 0x878
    float GroundDamage; // 0x87c
    TArray<UMultiFX2_Base*> GroundSlamFX2; // 0x880
    TArray<UMultiFX2_Base*> GroundPushFX2; // 0x890
    float MinDamageDealt; // 0x8a0
    float MaxDamageDealt; // 0x8a4
    float MinDamageDealtCharacter; // 0x8a8
    float MaxDamageDealtCharacter; // 0x8ac
    float MinDamageTaken; // 0x8b0
    float MaxDamageTaken; // 0x8b4
    float MinDamageTakenCharacter; // 0x8b8
    float MaxDamageTakenCharacter; // 0x8bc
    FVector RandomTorque; // 0x8c0
    float MinimumTorque; // 0x8cc
    float ApplyTorqueDelay; // 0x8d0
    float BasePhysicsImpulse; // 0x8d4
    float MassScaledPhysicsImpulse; // 0x8d8
    float MaxVelocity; // 0x8dc
    float NonMovableDamage; // 0x8e0
    float NonMovableAdditionalForce; // 0x8e4
    UClass* AOEMunition; // 0x8e8
    char pad_8f0[0x10];
    static ADescendoSpellTool* StaticClass();
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
}; // Size: 0x900
#pragma pack(pop)
