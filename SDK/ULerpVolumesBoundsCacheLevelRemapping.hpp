#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class ULerpVolumesBoundsCacheLevelRemapping : public UDataAsset {
public:
    char pad_30[0x50];
    static ULerpVolumesBoundsCacheLevelRemapping* StaticClass();
    void RebuildAll();
}; // Size: 0x80
#pragma pack(pop)
