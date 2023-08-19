#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMapBoundingBox {
    FVector Min; // 0x0
    FVector Max; // 0xc
}; // Size: 0x18
#pragma pack(pop)
