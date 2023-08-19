#pragma once
#include <cstdint>
#include "EPhaserLFOType.hpp"
#pragma pack(push, 1)
struct FSourceEffectPhaserSettings {
    float WetLevel; // 0x0
    float Frequency; // 0x4
    float Feedback; // 0x8
    EPhaserLFOType LFOType; // 0xc
    bool UseQuadraturePhase; // 0xd
    char pad_e[0x2];
}; // Size: 0x10
#pragma pack(pop)
