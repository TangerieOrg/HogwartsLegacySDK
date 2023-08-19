#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAnimSlotInfo {
    FName SlotName; // 0x0
    TArray<float> ChannelWeights; // 0x8
}; // Size: 0x18
#pragma pack(pop)
