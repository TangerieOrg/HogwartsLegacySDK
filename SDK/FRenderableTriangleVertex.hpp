#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FRenderableTriangleVertex {
    FVector Position; // 0x0
    FVector2D UV; // 0xc
    FVector Normal; // 0x14
    FColor Color; // 0x20
}; // Size: 0x24
#pragma pack(pop)
