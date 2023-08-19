#pragma once
#include <cstdint>
#include "FExplodingSkeletonPieceFX.hpp"
#include "FExplodingSkeletonPieceFXFade.hpp"
#include "FExplodingSkeletonPieceTimers.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UStaticMesh;
#pragma pack(push, 1)
struct FExplodingSkeletonBoneMesh {
    UStaticMesh* Mesh; // 0x0
    FVector Offset; // 0x8
    FRotator Rotation; // 0x14
    FVector Scale; // 0x20
    FExplodingSkeletonPieceTimers Timers; // 0x2c
    char pad_44[0x4];
    FExplodingSkeletonPieceFX FX; // 0x48
    FExplodingSkeletonPieceFXFade FadeFX; // 0x60
    bool bMeshInCharacterSpace; // 0x78
    char pad_79[0x7];
}; // Size: 0x80
#pragma pack(pop)
