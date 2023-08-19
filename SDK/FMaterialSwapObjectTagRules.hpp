#pragma once
#include <cstdint>
#include "EMaterialSwapRulesObjects.hpp"
#pragma pack(push, 1)
struct FMaterialSwapObjectTagRules {
    TArray<FName> Tags; // 0x0
    EMaterialSwapRulesObjects Rule; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
