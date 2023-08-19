#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FSlateMeshVertex {
    FVector2D Position; // 0x0
    FColor Color; // 0x8
    FVector2D UV0; // 0xc
    FVector2D UV1; // 0x14
    FVector2D UV2; // 0x1c
    FVector2D UV3; // 0x24
    FVector2D UV4; // 0x2c
    FVector2D UV5; // 0x34
}; // Size: 0x3c
#pragma pack(pop)
