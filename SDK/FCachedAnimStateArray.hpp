#pragma once
#include <cstdint>
#include "FCachedAnimStateData.hpp"
#pragma pack(push, 1)
struct FCachedAnimStateArray {
    TArray<FCachedAnimStateData> States; // 0x0
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
