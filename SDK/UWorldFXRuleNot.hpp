#pragma once
#include <cstdint>
#include "UWorldFXRule.hpp"
#pragma pack(push, 1)
class UWorldFXRuleNot : public UWorldFXRule {
public:
    UWorldFXRule* Rule; // 0x28
    static UWorldFXRuleNot* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
