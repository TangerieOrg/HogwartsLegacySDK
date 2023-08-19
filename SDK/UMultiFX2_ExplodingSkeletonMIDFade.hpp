#pragma once
#include <cstdint>
#include "UMultiFX2_ExplodingSkeletonInfoBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_ExplodingSkeletonMIDFade : public UMultiFX2_ExplodingSkeletonInfoBase {
public:
    FName FadeMaterialParmeter; // 0x28
    static UMultiFX2_ExplodingSkeletonMIDFade* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
