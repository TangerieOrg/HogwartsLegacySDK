#pragma once
#include <cstdint>
#include "EQuartzTimeSignatureQuantization.hpp"
#include "FQuartzPulseOverrideStep.hpp"
#pragma pack(push, 1)
struct FQuartzTimeSignature {
    int32_t NumBeats; // 0x0
    EQuartzTimeSignatureQuantization BeatType; // 0x4
    char pad_5[0x3];
    TArray<FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8
}; // Size: 0x18
#pragma pack(pop)
