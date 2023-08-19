#pragma once
#include <cstdint>
#include "UMultiFX2_ExplodingSkeletonInfoBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_ExplodingSkeletonInfoStandard : public UMultiFX2_ExplodingSkeletonInfoBase {
public:
    bool bUseDitheredAlphaFade; // 0x28
    char pad_29[0x7];
    static UMultiFX2_ExplodingSkeletonInfoStandard* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
