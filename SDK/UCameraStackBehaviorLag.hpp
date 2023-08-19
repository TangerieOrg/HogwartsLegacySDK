#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorLag : public UCameraStackBehaviorBlend {
public:
    float SpeedX; // 0x1b8
    float SpeedY; // 0x1bc
    float SpeedZ; // 0x1c0
    FVector MinDistances; // 0x1c4
    FVector MaxDistances; // 0x1d0
    bool bWorldSpace; // 0x1dc
    bool bLagPreviousBehaviorOnly; // 0x1dd
    bool bUseSubstepping; // 0x1de
    char pad_1df[0x1];
    float MaxTimeStep; // 0x1e0
    char pad_1e4[0x34];
    static UCameraStackBehaviorLag* StaticClass();
}; // Size: 0x218
#pragma pack(pop)
