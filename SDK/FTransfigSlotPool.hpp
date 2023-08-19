#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTransfigSlotPool {
    FName SlotID; // 0x0
    int32_t BaseSlots; // 0x8
    int32_t MaximumSlots; // 0xc
    int32_t SlotsUnlocked; // 0x10
    char pad_14[0x54];
}; // Size: 0x68
#pragma pack(pop)
