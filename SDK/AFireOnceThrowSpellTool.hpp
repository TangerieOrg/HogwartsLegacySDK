#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
#pragma pack(push, 1)
class AFireOnceThrowSpellTool : public AFireOnceSpellTool {
public:
    bool bShowDebug; // 0x870
    char pad_871[0x3];
    float BasePhysicsImpulse; // 0x874
    float MassScaledPhysicsImpulse; // 0x878
    float MaxVelocity; // 0x87c
    float ThrowAngleZ; // 0x880
    float TargetingPercent; // 0x884
    float TargetHalfAngleXY; // 0x888
    float TargetHalfAngleZ; // 0x88c
    static AFireOnceThrowSpellTool* StaticClass();
}; // Size: 0x890
#pragma pack(pop)
