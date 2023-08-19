#pragma once
#include <cstdint>
#include "FHealthThreshold.hpp"
#include "FObjectStateData.hpp"
class UAkAudioEvent;
class UClass;
class AActor;
#pragma pack(push, 1)
struct FCharacterStateData : public FObjectStateData {
    UAkAudioEvent* RagdollHitSfx; // 0x98
    UClass* BonySkeleton; // 0xa0
    char pad_a8[0x18];
    float GameEventRadius; // 0xc0
    float RegenerationRate; // 0xc4
    float CapsuleUnderWaterPercReq; // 0xc8
    float CapsuleUnderWaterPercReqStop; // 0xcc
    uint8_t bOverrideTeammateAlly : 1; // 0xd0
    uint8_t bWillNearDeathKneel : 1; // 0xd0
    uint8_t bNearDeathKneelRecover : 1; // 0xd0
    uint8_t bNearDeathKneelExtendedOnDamage : 1; // 0xd0
    uint8_t pad_bitfield_d0_4 : 4;
    char pad_d1[0x3];
    float DeathRecoverInvulnerableTime; // 0xd4
    uint8_t bIsBossCharacter : 1; // 0xd8
    uint8_t bProtected : 1; // 0xd8
    uint8_t bImmuneToFinisherDeath : 1; // 0xd8
    uint8_t bIgnoreAllyAttacks : 1; // 0xd8
    uint8_t bImperiusCharTakesFullDamage : 1; // 0xd8
    uint8_t pad_bitfield_d8_5 : 3;
    char pad_d9[0x7];
    AActor* ImperiusInstigatorPtr; // 0xe0
    uint8_t bDisplayDamage : 1; // 0xe8
    uint8_t pad_bitfield_e8_1 : 7;
    char pad_e9[0x7];
    TArray<FHealthThreshold> HealthThresholdArray; // 0xf0
    float CriticalHealthPercent; // 0x100
    float ReplicaHealthPercent; // 0x104
    UClass* OverrideLootDropContainer; // 0x108
    char pad_110[0x170];
}; // Size: 0x280
#pragma pack(pop)
