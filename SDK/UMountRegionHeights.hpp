#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UMountRegionHeights : public UDataAsset {
public:
    float HeightBuffer; // 0x30
    char pad_34[0x54];
    float HeightRaiseInterpSpeed; // 0x88
    float HeightLowerInterpSpeed; // 0x8c
    static UMountRegionHeights* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
