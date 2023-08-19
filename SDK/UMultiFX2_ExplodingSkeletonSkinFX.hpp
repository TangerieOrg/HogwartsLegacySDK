#pragma once
#include <cstdint>
#include "UMultiFX2_ExplodingSkeletonInfoBase.hpp"
class UClass;
#pragma pack(push, 1)
class UMultiFX2_ExplodingSkeletonSkinFX : public UMultiFX2_ExplodingSkeletonInfoBase {
public:
    UClass* SkinFXEffect; // 0x28
    static UMultiFX2_ExplodingSkeletonSkinFX* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
