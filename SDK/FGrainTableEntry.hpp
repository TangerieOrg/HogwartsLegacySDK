#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGrainTableEntry {
    int32_t SampleIndex; // 0x0
    float RPM; // 0x4
}; // Size: 0x8
#pragma pack(pop)
