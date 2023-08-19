#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorShake : public UCameraStackBehaviorBlend {
public:
    FRotator ShakeLimits; // 0x1b8
    FVector2D ShakeDelay; // 0x1c4
    float TraumaDuration; // 0x1cc
    float TraumaStart; // 0x1d0
    float TraumaPow; // 0x1d4
    float RepeatTraumaDelay; // 0x1d8
    bool bUsePerlinNoise; // 0x1dc
    bool bMaintainSeed; // 0x1dd
    bool bKeepAlive; // 0x1de
    char pad_1df[0x21];
    static UCameraStackBehaviorShake* StaticClass();
    void AddTrauma(float InTrauma);
}; // Size: 0x200
#pragma pack(pop)
