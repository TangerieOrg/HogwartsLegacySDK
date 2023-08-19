#pragma once
#include <cstdint>
#include "UAvaStreamingVolumeComponentBase.hpp"
#pragma pack(push, 1)
class UAvaTileRegionVolumeComponent : public UAvaStreamingVolumeComponentBase {
public:
    TArray<void*> TilesToForceLoad; // 0x260
    TArray<void*> TilesToForceUnload; // 0x270
    TArray<void*> TilesToForceHide; // 0x280
    TArray<void*> TilesToOnlyLoad; // 0x290
    char pad_2a0[0x10];
    static UAvaTileRegionVolumeComponent* StaticClass();
    void RemoveTiles();
    void ForceUnload();
    void ForceLoad();
    void AddTiles();
}; // Size: 0x2b0
#pragma pack(pop)
