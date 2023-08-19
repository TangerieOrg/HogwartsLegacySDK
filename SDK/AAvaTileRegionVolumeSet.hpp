#pragma once
#include <cstdint>
#include "AAvaStreamingVolumeSet.hpp"
#pragma pack(push, 1)
class AAvaTileRegionVolumeSet : public AAvaStreamingVolumeSet {
public:
    uint8_t UnloadCO_ : 1; // 0x268
    uint8_t UnloadFO_ : 1; // 0x268
    uint8_t UnloadHN_ : 1; // 0x268
    uint8_t UnloadHS_ : 1; // 0x268
    uint8_t UnloadSW_ : 1; // 0x268
    uint8_t UnloadTU_ : 1; // 0x268
    uint8_t pad_bitfield_268_6 : 2;
    char pad_269[0x7];
    TArray<void*> TilesToForceLoad; // 0x270
    TArray<void*> TilesToForceUnload; // 0x280
    TArray<void*> TilesToForceHide; // 0x290
    TArray<void*> TilesToOnlyLoad; // 0x2a0
    static AAvaTileRegionVolumeSet* StaticClass();
    void ForceDeactivate();
    void ForceActivate();
}; // Size: 0x2b0
#pragma pack(pop)
