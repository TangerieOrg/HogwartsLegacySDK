#pragma once
#include <cstdint>
#include "UMultiFX2_ExplodingSkeletonInfoBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_ExplodingSkeletonInfoCollisionOverride : public UMultiFX2_ExplodingSkeletonInfoBase {
public:
    FName CollisionProfileName; // 0x28
    static UMultiFX2_ExplodingSkeletonInfoCollisionOverride* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
