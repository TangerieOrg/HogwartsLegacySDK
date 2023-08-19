#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
#pragma pack(push, 1)
class ADepulsoMaximaSpellTool : public AFireOnceSpellTool {
public:
    bool bShowDebug; // 0x870
    char pad_871[0x3];
    float BasePhysicsImpulse; // 0x874
    float MassScaledPhysicsImpulse; // 0x878
    float CharacterBasePhysicsImpulse; // 0x87c
    float CharacterMassScaledPhysicsImpulse; // 0x880
    float MaxVelocity; // 0x884
    int32_t TargetHalfAngleXY; // 0x888
    int32_t TargetHalfAngleZ; // 0x88c
    float LaunchAngle; // 0x890
    float HeightAdjustment; // 0x894
    float LevelMinZThreshold; // 0x898
    float LevelMaxZThreshold; // 0x89c
    int32_t TargetingPercent; // 0x8a0
    bool bUpdateTarget; // 0x8a4
    char pad_8a5[0x3];
    float LeviosoImpulseScale; // 0x8a8
    float NonMovableDamageMax; // 0x8ac
    float NonMovableDamageMin; // 0x8b0
    float NonMovableAdditionalForce; // 0x8b4
    static ADepulsoMaximaSpellTool* StaticClass();
}; // Size: 0x8b8
#pragma pack(pop)
