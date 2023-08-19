#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_AdjustInventoryItem : public URPGTriggerEffect_Base {
public:
    FName CharacterID; // 0x40
    FName ItemId; // 0x48
    int32_t Count; // 0x50
    char pad_54[0x4];
    static URPGTriggerEffect_AdjustInventoryItem* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
