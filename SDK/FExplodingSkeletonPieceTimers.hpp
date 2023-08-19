#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FExplodingSkeletonPieceTimers {
    FVector2D ActivationDelayMinMax; // 0x0
    FVector2D TimeoutMinMax; // 0x8
    FVector2D FadeOutMinMax; // 0x10
}; // Size: 0x18
#pragma pack(pop)
