#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FChromaSDKColorFrame1D {
    TArray<FLinearColor> Colors; // 0x0
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
