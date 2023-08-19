#pragma once
#include <cstdint>
#include "FWorldFXPresetRuleName.hpp"
#include "UWorldFXRule.hpp"
#pragma pack(push, 1)
class UWorldFXPresetRule : public UWorldFXRule {
public:
    FWorldFXPresetRuleName Preset; // 0x28
    static UWorldFXPresetRule* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
