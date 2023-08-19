#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FNavCollisionBox {
    FVector Offset; // 0x0
    FVector Extent; // 0xc
}; // Size: 0x18
#pragma pack(pop)
