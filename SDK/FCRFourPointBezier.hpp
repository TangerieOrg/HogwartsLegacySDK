#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCRFourPointBezier {
    FVector A; // 0x0
    FVector B; // 0xc
    FVector C; // 0x18
    FVector D; // 0x24
}; // Size: 0x30
#pragma pack(pop)
