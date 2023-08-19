#pragma once
#include <cstdint>
#include "UFXAdjustments.hpp"
#pragma pack(push, 1)
class UFXAdjustmentsKillFXAutoGroup : public UFXAdjustments {
public:
    FName Group; // 0x28
    bool bImmediate; // 0x30
    char pad_31[0x7];
    static UFXAdjustmentsKillFXAutoGroup* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
