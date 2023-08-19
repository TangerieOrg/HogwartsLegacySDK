#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAnimSlotGroup {
    FName GroupName; // 0x0
    TArray<FName> SlotNames; // 0x8
}; // Size: 0x18
#pragma pack(pop)
