#pragma once
#include <cstdint>
#include "EQuartzCommandQuantization.hpp"
#pragma pack(push, 1)
struct FQuartzPulseOverrideStep {
    int32_t NumberOfPulses; // 0x0
    EQuartzCommandQuantization PulseDuration; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
