#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EVolumeLoadIdentifier.hpp"
class USceneComponent;
class UAvaStreamingVolumeComponentBase;
#pragma pack(push, 1)
class AAvaStreamingVolumeSet : public AActor {
public:
    USceneComponent* SceneComponent; // 0x248
    bool bHidesWithTiles; // 0x250
    bool bShouldAffectTileStreaming; // 0x251
    bool bPauseTileStreaming; // 0x252
    char pad_253[0x1];
    int32_t TileRenderingMaxLod; // 0x254
    float AdditionalBoundsRadius; // 0x258
    bool bPreventExteriorRendering; // 0x25c
    bool bIgnoreShellVolumes; // 0x25d
    EVolumeLoadIdentifier VolumeLoadIdentifier; // 0x25e
    char pad_25f[0x9];
    static AAvaStreamingVolumeSet* StaticClass();
    void SetForcedStateStatus(bool bForced);
    bool IsStateForced();
    UAvaStreamingVolumeComponentBase* GetMaster();
}; // Size: 0x268
#pragma pack(pop)
