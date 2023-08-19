#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTransfigSlotPoolExpansion {
    FName LockId; // 0x0
    FName SlotID; // 0x8
    int32_t SlotAmount; // 0x10
}; // Size: 0x14
#pragma pack(pop)
