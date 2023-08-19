#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSolverBreakingFilterSettings {
    bool FilterEnabled; // 0x0
    char pad_1[0x3];
    float MinMass; // 0x4
    float MinSpeed; // 0x8
    float MinVolume; // 0xc
}; // Size: 0x10
#pragma pack(pop)
