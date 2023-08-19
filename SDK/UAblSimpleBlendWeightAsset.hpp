#pragma once
#include <cstdint>
#include "UAblBoneBlendWeightAsset.hpp"
#pragma pack(push, 1)
class UAblSimpleBlendWeightAsset : public UAblBoneBlendWeightAsset {
public:
    char pad_88[0x50];
    static UAblSimpleBlendWeightAsset* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
