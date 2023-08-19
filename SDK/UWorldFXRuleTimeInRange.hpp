#pragma once
#include <cstdint>
#include "FTimeInput.hpp"
#include "UWorldFXRuleTime.hpp"
#pragma pack(push, 1)
class UWorldFXRuleTimeInRange : public UWorldFXRuleTime {
public:
    FTimeInput StartTime; // 0x28
    FTimeInput EndTime; // 0x34
    static UWorldFXRuleTimeInRange* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
