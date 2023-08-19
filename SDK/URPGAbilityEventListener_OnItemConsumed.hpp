#pragma once
#include <cstdint>
#include "FItemFilter.hpp"
#include "URPGAbilityEventListener.hpp"
#pragma pack(push, 1)
class URPGAbilityEventListener_OnItemConsumed : public URPGAbilityEventListener {
public:
    bool bUseItemTypeFilter; // 0x98
    char pad_99[0x7];
    FItemFilter ItemTypeFilter; // 0xa0
    bool bUseItemUsageTypeFilter; // 0xb8
    char pad_b9[0x7];
    FItemFilter ItemUsageTypeFilter; // 0xc0
    char pad_d8[0x8];
    static URPGAbilityEventListener_OnItemConsumed* StaticClass();
    void OnItemConsumed(FName CharacterID, FName ItemId, FName Variation, FName ItemType, FName ItemUsageType);
}; // Size: 0xe0
#pragma pack(pop)
