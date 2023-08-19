#pragma once
#include <cstdint>
class UWorldFXRule;
#pragma pack(push, 1)
struct FWorldFXPresetRuleDefinition {
    FName Name; // 0x0
    UWorldFXRule* Rule; // 0x8
}; // Size: 0x10
#pragma pack(pop)
