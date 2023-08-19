#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblTaskCondition_DamageOverTime : public UAblTaskCondition {
public:
    FName DoT_Type; // 0x28
    static UAblTaskCondition_DamageOverTime* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
