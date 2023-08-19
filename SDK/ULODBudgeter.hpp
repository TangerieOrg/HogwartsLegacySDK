#pragma once
#include <cstdint>
#include "UBudgeter.hpp"
#pragma pack(push, 1)
class ULODBudgeter : public UBudgeter {
public:
    char pad_40[0x8];
    static ULODBudgeter* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
