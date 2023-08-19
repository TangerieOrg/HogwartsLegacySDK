#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UGearAppearanceItemDefinition : public UDataAsset {
public:
    FName GearAppearanceID; // 0x30
    EGearSlotIDEnum GearSlot; // 0x38
    char pad_39[0x57];
    static UGearAppearanceItemDefinition* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
