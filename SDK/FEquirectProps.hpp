#pragma once
#include <cstdint>
#include "FBox2D.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FEquirectProps {
    FBox2D LeftUVRect; // 0x0
    FBox2D RightUVRect; // 0x14
    FVector2D LeftScale; // 0x28
    FVector2D RightScale; // 0x30
    FVector2D LeftBias; // 0x38
    FVector2D RightBias; // 0x40
}; // Size: 0x48
#pragma pack(pop)
