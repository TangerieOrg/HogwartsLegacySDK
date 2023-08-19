#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FBox {
    FVector Min; // 0x0
    FVector Max; // 0xc
    uint8_t IsValid; // 0x18
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
