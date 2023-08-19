#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimatedVectorPropertyDriver {
    char pad_0[0x24];
    FVector DefaultValue; // 0x24
    char pad_30[0x18];
}; // Size: 0x48
#pragma pack(pop)
