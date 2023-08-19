#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblHasTagTaskCondition : public UAblTaskCondition {
public:
    FName Tag; // 0x28
    bool bInverse; // 0x30
    char pad_31[0x7];
    static UAblHasTagTaskCondition* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
