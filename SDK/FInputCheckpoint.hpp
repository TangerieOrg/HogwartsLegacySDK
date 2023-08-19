#pragma once
#include <cstdint>
#include "EUMGInputAction.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FInputCheckpoint {
    EUMGInputAction InputAction; // 0x0
    char pad_1[0x3];
    FVector2D InputWindow; // 0x4
    int32_t PathSplineIndex; // 0xc
    FVector2D Location; // 0x10
}; // Size: 0x18
#pragma pack(pop)
