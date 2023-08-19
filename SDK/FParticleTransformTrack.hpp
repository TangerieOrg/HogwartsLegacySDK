#pragma once
#include <cstdint>
#include "FRawAnimSequenceTrack.hpp"
#pragma pack(push, 1)
struct FParticleTransformTrack {
    FRawAnimSequenceTrack RawTransformTrack; // 0x0
    float BeginOffset; // 0x30
    bool bDeactivateOnEnd; // 0x34
    char pad_35[0x3];
    TArray<float> KeyTimestamps; // 0x38
}; // Size: 0x48
#pragma pack(pop)
