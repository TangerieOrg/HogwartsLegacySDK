#pragma once
#include <cstdint>
#include "UAnimationProvider.hpp"
class UAnimationAsset;
#pragma pack(push, 1)
class UAnimationAsset_Direct : public UAnimationProvider {
public:
    UAnimationAsset* AnimationAsset; // 0x28
    static UAnimationAsset_Direct* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
