#pragma once
#include <cstdint>
#include "FExplodingSkeletonPieceFXBase.hpp"
#pragma pack(push, 1)
struct FExplodingSkeletonPieceFXFade : public FExplodingSkeletonPieceFXBase {
    bool bWaitForSystemToFinish; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
