#pragma once
#include <cstdint>
#include "EControlRigAnimEasingType.hpp"
#include "EControlRigRotationOrder.hpp"
#include "FRigUnit_BoneHarmonics_BoneTarget.hpp"
#include "FRigUnit_BoneHarmonics_WorkData.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable {
    TArray<FRigUnit_BoneHarmonics_BoneTarget> Bones; // 0x68
    FVector WaveSpeed; // 0x78
    FVector WaveFrequency; // 0x84
    FVector WaveAmplitude; // 0x90
    FVector WaveOffset; // 0x9c
    FVector WaveNoise; // 0xa8
    EControlRigAnimEasingType WaveEase; // 0xb4
    char pad_b5[0x3];
    float WaveMinimum; // 0xb8
    float WaveMaximum; // 0xbc
    EControlRigRotationOrder RotationOrder; // 0xc0
    bool bPropagateToChildren; // 0xc1
    char pad_c2[0x6];
    FRigUnit_BoneHarmonics_WorkData WorkData; // 0xc8
}; // Size: 0xe8
#pragma pack(pop)
