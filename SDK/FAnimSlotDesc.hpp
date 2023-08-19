#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAnimSlotDesc {
    FName SlotName; // 0x0
    int32_t NumChannels; // 0x8
}; // Size: 0xc
#pragma pack(pop)
