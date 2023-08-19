#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "USoundNode.hpp"
class UDistributionFloatConstantCurve;
#pragma pack(push, 1)
class USoundNodeEnveloper : public USoundNode {
public:
    float LoopStart; // 0x48
    float LoopEnd; // 0x4c
    float DurationAfterLoop; // 0x50
    int32_t LoopCount; // 0x54
    uint8_t bLoopIndefinitely : 1; // 0x58
    uint8_t bLoop : 1; // 0x58
    uint8_t pad_bitfield_58_2 : 6;
    char pad_59[0x7];
    UDistributionFloatConstantCurve* VolumeInterpCurve; // 0x60
    UDistributionFloatConstantCurve* PitchInterpCurve; // 0x68
    FRuntimeFloatCurve VolumeCurve; // 0x70
    FRuntimeFloatCurve PitchCurve; // 0xf8
    float PitchMin; // 0x180
    float PitchMax; // 0x184
    float VolumeMin; // 0x188
    float VolumeMax; // 0x18c
    static USoundNodeEnveloper* StaticClass();
}; // Size: 0x190
#pragma pack(pop)
