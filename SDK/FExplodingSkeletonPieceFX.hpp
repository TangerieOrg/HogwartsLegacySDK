#pragma once
#include <cstdint>
#include "FExplodingSkeletonPieceFXBase.hpp"
#pragma pack(push, 1)
struct FExplodingSkeletonPieceFX : public FExplodingSkeletonPieceFXBase {
    bool bWaitForActivation; // 0x10
    bool bKillOnStartFade; // 0x11
    char pad_12[0x6];
}; // Size: 0x18
#pragma pack(pop)
