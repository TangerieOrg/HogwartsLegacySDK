#pragma once
#include <cstdint>
#include "FMaterialPermuterHardSwapBase.hpp"
#include "FMaterialSwapRules.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterHardSwapRules : public FMaterialPermuterHardSwapBase {
    FMaterialSwapRules Rules; // 0x58
}; // Size: 0x138
#pragma pack(pop)
