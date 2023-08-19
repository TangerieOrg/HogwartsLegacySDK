#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMapFXEntry {
    FName FXName; // 0x0
    FName FXPath; // 0x8
    FVector Scale; // 0x10
    bool Looped; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
