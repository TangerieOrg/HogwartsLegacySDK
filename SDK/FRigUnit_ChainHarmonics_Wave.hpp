#pragma once
#include <cstdint>
#include "EControlRigAnimEasingType.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_ChainHarmonics_Wave {
    bool bEnabled; // 0x0
    char pad_1[0x3];
    FVector WaveFrequency; // 0x4
    FVector WaveAmplitude; // 0x10
    FVector WaveOffset; // 0x1c
    FVector WaveNoise; // 0x28
    float WaveMinimum; // 0x34
    float WaveMaximum; // 0x38
    EControlRigAnimEasingType WaveEase; // 0x3c
    char pad_3d[0x3];
}; // Size: 0x40
#pragma pack(pop)
