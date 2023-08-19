#pragma once
#include <cstdint>
#include "FChromaSDKColors.hpp"
#pragma pack(push, 1)
struct FChromaSDKColorFrame2D {
    TArray<FChromaSDKColors> Colors; // 0x0
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
