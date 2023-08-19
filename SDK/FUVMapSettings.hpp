#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FUVMapSettings {
    FVector Size; // 0x0
    FVector2D UVTile; // 0xc
    FVector Position; // 0x14
    FRotator Rotation; // 0x20
    FVector Scale; // 0x2c
}; // Size: 0x38
#pragma pack(pop)
