#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSolverRemovalFilterSettings {
    bool FilterEnabled; // 0x0
    char pad_1[0x3];
    float MinMass; // 0x4
    float MinVolume; // 0x8
}; // Size: 0xc
#pragma pack(pop)
