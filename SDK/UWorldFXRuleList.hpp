#pragma once
#include <cstdint>
#include "UWorldFXRule.hpp"
#pragma pack(push, 1)
class UWorldFXRuleList : public UWorldFXRule {
public:
    TArray<UWorldFXRule*> Rules; // 0x28
    static UWorldFXRuleList* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
