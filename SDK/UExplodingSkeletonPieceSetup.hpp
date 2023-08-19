#pragma once
#include <cstdint>
#include "FExplodingSkeletonSetup.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UExplodingSkeletonPieceSetup : public UDataAsset {
public:
    FExplodingSkeletonSetup Pieces; // 0x30
    static UExplodingSkeletonPieceSetup* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
