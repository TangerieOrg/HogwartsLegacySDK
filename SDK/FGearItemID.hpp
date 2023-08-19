#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#pragma pack(push, 1)
struct FGearItemID {
    FName GearID; // 0x0
    FName GearVariation; // 0x8
    bool IsEquipped; // 0x10
    EGearSlotIDEnum GearItemSlot; // 0x11
    char pad_12[0x2];
}; // Size: 0x14
#pragma pack(pop)
