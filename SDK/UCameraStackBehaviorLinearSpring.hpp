#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorLinearSpring : public UCameraStackBehaviorBlend {
public:
    bool bDrawDebug; // 0x1b8
    bool bUseSubstepping; // 0x1b9
    char pad_1ba[0x2];
    float MaxTimeStep; // 0x1bc
    float SpeedX; // 0x1c0
    float SpeedY; // 0x1c4
    float SpeedZ; // 0x1c8
    float FrequencyX; // 0x1cc
    float FrequencyY; // 0x1d0
    float FrequencyZ; // 0x1d4
    float DampingRatioX; // 0x1d8
    float DampingRatioY; // 0x1dc
    float DampingRatioZ; // 0x1e0
    FVector MinDistances; // 0x1e4
    FVector MaxDistances; // 0x1f0
    float DefaultSpeed; // 0x1fc
    bool bEnableSpring; // 0x200
    char pad_201[0x7f];
    static UCameraStackBehaviorLinearSpring* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
