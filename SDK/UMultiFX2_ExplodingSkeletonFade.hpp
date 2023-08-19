#pragma once
#include <cstdint>
#include "UMultiFX2_ExplodingSkeletonInfoBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_ExplodingSkeletonFade : public UMultiFX2_ExplodingSkeletonInfoBase {
public:
    FName FadeMaterialKey; // 0x28
    FName FadeMaterialParmeter; // 0x30
    static UMultiFX2_ExplodingSkeletonFade* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
