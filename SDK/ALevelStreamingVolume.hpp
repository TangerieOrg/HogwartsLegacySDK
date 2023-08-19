#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "EStreamingVolumeUsage.hpp"
#pragma pack(push, 1)
class ALevelStreamingVolume : public AVolume {
public:
    TArray<FName> StreamingLevelNames; // 0x280
    uint8_t bEditorPreVisOnly : 1; // 0x290
    uint8_t bDisabled : 1; // 0x290
    uint8_t pad_bitfield_290_2 : 6;
    char pad_291[0x3];
    EStreamingVolumeUsage StreamingUsage; // 0x294
    char pad_295[0x3];
    static ALevelStreamingVolume* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
