#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblTaskCondition_IsFlying : public UAblTaskCondition {
public:
    bool bNegate; // 0x28
    char pad_29[0x7];
    static UAblTaskCondition_IsFlying* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
