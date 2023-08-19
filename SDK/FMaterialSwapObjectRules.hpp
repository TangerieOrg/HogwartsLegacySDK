#pragma once
#include <cstdint>
#include "EMaterialSwapRulesObjectMatchMode.hpp"
#include "EMaterialSwapRulesObjects.hpp"
#pragma pack(push, 1)
struct FMaterialSwapObjectRules {
    EMaterialSwapRulesObjects Rule; // 0x0
    char pad_1[0x7];
    TArray<FName> Objects; // 0x8
    EMaterialSwapRulesObjectMatchMode MatchMode; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
