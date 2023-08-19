#pragma once
#include <cstdint>
#include "UWorldFXRuleTimeInRange.hpp"
#pragma pack(push, 1)
class UWorldFXRuleGameTimeInRange : public UWorldFXRuleTimeInRange {
public:
    static UWorldFXRuleGameTimeInRange* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
