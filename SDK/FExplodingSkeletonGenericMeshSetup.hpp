#pragma once
#include <cstdint>
#include "FExplodingSkeletonPieceFX.hpp"
#include "FExplodingSkeletonPieceFXFade.hpp"
#include "FExplodingSkeletonPieceTimers.hpp"
#include "FVector2D.hpp"
class UStaticMesh;
#pragma pack(push, 1)
struct FExplodingSkeletonGenericMeshSetup {
    UStaticMesh* Mesh; // 0x0
    FVector2D ScaleMinMax; // 0x8
    int32_t MinInstances; // 0x10
    int32_t MaxInstances; // 0x14
    FExplodingSkeletonPieceTimers Timers; // 0x18
    FExplodingSkeletonPieceFX FX; // 0x30
    float PercentageWithFX; // 0x48
    char pad_4c[0x4];
    FExplodingSkeletonPieceFXFade FadeFX; // 0x50
}; // Size: 0x68
#pragma pack(pop)
