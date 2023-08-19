#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
class UClass;
#pragma pack(push, 1)
class ADepulsoSpellTool : public AFireOnceSpellTool {
public:
    int32_t TargetHalfAngleXY; // 0x870
    int32_t TargetHalfAngleZ; // 0x874
    float LaunchAngle; // 0x878
    float InAirLaunchAngle; // 0x87c
    float MaximumLaunchAngle; // 0x880
    float HeightAdjustment; // 0x884
    float LevelMinZThreshold; // 0x888
    float LevelMaxZThreshold; // 0x88c
    float BasePhysicsImpulse; // 0x890
    float MassScaledPhysicsImpulse; // 0x894
    float CharacterBasePhysicsImpulse; // 0x898
    float CharacterMassScaledPhysicsImpulse; // 0x89c
    float MaxVelocity; // 0x8a0
    float NonMovableDamage; // 0x8a4
    float NonMovableAdditionalForce; // 0x8a8
    int32_t TargetingPercent; // 0x8ac
    bool bUpdateTarget; // 0x8b0
    char pad_8b1[0x3];
    float LeviosoImpulseScale; // 0x8b4
    float MinDamageDealt; // 0x8b8
    float MaxDamageDealt; // 0x8bc
    float MinDamageDealtCharacter; // 0x8c0
    float MaxDamageDealtCharacter; // 0x8c4
    float MinDamageTaken; // 0x8c8
    float MaxDamageTaken; // 0x8cc
    float MinDamageTakenCharacter; // 0x8d0
    float MaxDamageTakenCharacter; // 0x8d4
    float MinDamageTakenCharacterWall; // 0x8d8
    float MaxDamageTakenCharacterWall; // 0x8dc
    float MinDamageTakenCharacterFloor; // 0x8e0
    float MaxDamageTakenCharacterFloor; // 0x8e4
    float MinDamageTakenCharacterCharacter; // 0x8e8
    float MaxDamageTakenCharacterCharacter; // 0x8ec
    UClass* AOEMunition; // 0x8f0
    static ADepulsoSpellTool* StaticClass();
}; // Size: 0x8f8
#pragma pack(pop)
