#pragma once
#include <cstdint>
#include "EVolumeLoadIdentifier.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UAvaStreamingVolumeComponentBase : public USceneComponent {
public:
    int32_t TileRenderingMaxLod; // 0x220
    float AdditionalBoundsRadius; // 0x224
    bool bPreventExteriorRendering; // 0x228
    bool bIgnoreShellVolumes; // 0x229
    bool bIsDoorPreloadVolume; // 0x22a
    bool bActiveWithFastTravelDoors; // 0x22b
    EVolumeLoadIdentifier VolumeLoadIdentifier; // 0x22c
    char pad_22d[0x33];
    static UAvaStreamingVolumeComponentBase* StaticClass();
    void SetForcedStateStatus(bool bForced);
    bool IsStateForced();
}; // Size: 0x260
#pragma pack(pop)
