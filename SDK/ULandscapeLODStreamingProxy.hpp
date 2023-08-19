#pragma once
#include <cstdint>
#include "UStreamableRenderAsset.hpp"
#pragma pack(push, 1)
class ULandscapeLODStreamingProxy : public UStreamableRenderAsset {
public:
    char pad_60[0x8];
    static ULandscapeLODStreamingProxy* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
