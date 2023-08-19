#pragma once
#include <cstdint>
#include "UBudgeter.hpp"
#pragma pack(push, 1)
class UClothBudgeter : public UBudgeter {
public:
    char pad_40[0x8];
    static UClothBudgeter* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
