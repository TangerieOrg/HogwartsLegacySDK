#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FBox2D {
    FVector2D Min; // 0x0
    FVector2D Max; // 0x8
    uint8_t bIsValid; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
