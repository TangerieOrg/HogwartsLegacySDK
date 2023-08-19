#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCompanionSettingData {
    float CompanionFarDistance; // 0x0
    float CompanionTeleportDistance; // 0x4
    float CompanionIdealFollowDistance; // 0x8
    float CompanionIdealFollowBufferDistance; // 0xc
    bool bUsePlayerMovement; // 0x10
    char pad_11[0x3];
    float MovementDelay; // 0x14
    float BypassMovementDelayTimerDistance; // 0x18
    char pad_1c[0x4];
    bool bCanSlowWalk; // 0x20
    char pad_21[0x3];
    float StartSlowWalkingProximityRadius; // 0x24
    char pad_28[0x4];
    bool bCanWalk; // 0x2c
    char pad_2d[0x3];
    float StartWalkingProximityRadius; // 0x30
    char pad_34[0x4];
    bool bCanJog; // 0x38
    char pad_39[0x3];
    float StartJoggingProximityRadius; // 0x3c
    char pad_40[0x4];
    bool bCanSprint; // 0x44
    char pad_45[0x3];
    float StartSprintingProximityRadius; // 0x48
    float MaxCompanionCombatDistance; // 0x4c
    TArray<float> CompanionSpellCooldownMultipliers; // 0x50
    float PlayerLowHealthPercentage; // 0x60
    float MaxCompanionHealingDistance; // 0x64
    float PlayerHealingCooldownTime; // 0x68
    float PlayerDownUndetectedTime; // 0x6c
    bool UseDisillusionment; // 0x70
    char pad_71[0x3];
    float DisillusionmentCooldownTime; // 0x74
    float LumosCooldownTime; // 0x78
    float MaximumVoiceoverRange; // 0x7c
}; // Size: 0x80
#pragma pack(pop)
