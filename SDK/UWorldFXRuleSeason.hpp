#pragma once
#include <cstdint>
#include "UWorldFXRuleSeasonBase.hpp"
#pragma pack(push, 1)
class UWorldFXRuleSeason : public UWorldFXRuleSeasonBase {
public:
    int32_t Seasons; // 0x28
    char pad_2c[0x4];
    static UWorldFXRuleSeason* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
