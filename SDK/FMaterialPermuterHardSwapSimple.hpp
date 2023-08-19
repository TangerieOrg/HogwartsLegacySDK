#pragma once
#include <cstdint>
#include "FMaterialPermuterHardSwapBase.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterHardSwapSimple : public FMaterialPermuterHardSwapBase {
    bool bIncludeChildren; // 0x58
    char pad_59[0x7];
}; // Size: 0x60
#pragma pack(pop)
