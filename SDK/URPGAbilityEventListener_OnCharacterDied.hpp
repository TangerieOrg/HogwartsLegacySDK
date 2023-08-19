#pragma once
#include <cstdint>
#include "ELevelComparison.hpp"
#include "URPGAbilityEventListener.hpp"
#pragma pack(push, 1)
class URPGAbilityEventListener_OnCharacterDied : public URPGAbilityEventListener {
public:
    bool bKillInstigatorMustBeAbilityOwner; // 0x98
    ELevelComparison LevelComparison; // 0x99
    char pad_9a[0x2];
    int32_t LevelDifference; // 0x9c
    float MaximumDistance; // 0xa0
    char pad_a4[0x4];
    static URPGAbilityEventListener_OnCharacterDied* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
