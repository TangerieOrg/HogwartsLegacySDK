#pragma once
#include <cstdint>
#include "UBudgeter.hpp"
#pragma pack(push, 1)
class UAmbientPaintingBudgeter : public UBudgeter {
public:
    char pad_40[0x78];
    static UAmbientPaintingBudgeter* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
