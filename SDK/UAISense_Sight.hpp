#pragma once
#include <cstdint>
#include "UAISense.hpp"
#pragma pack(push, 1)
class UAISense_Sight : public UAISense {
public:
    char pad_80[0xc8];
    int32_t MaxTracesPerTick; // 0x148
    int32_t MinQueriesPerTimeSliceCheck; // 0x14c
    double MaxTimeSlicePerTick; // 0x150
    float HighImportanceQueryDistanceThreshold; // 0x158
    char pad_15c[0x4];
    float MaxQueryImportance; // 0x160
    float SightLimitQueryImportance; // 0x164
    char pad_168[0x8];
    static UAISense_Sight* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
