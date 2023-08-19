#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FHardSwapBatchComponentSettings {
    int32_t MIDCreatesAllowedPerFrame; // 0x0
    int32_t MaterialsToSwapPerFrame; // 0x4
    bool bDetachAndDestoryWhenDone; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
