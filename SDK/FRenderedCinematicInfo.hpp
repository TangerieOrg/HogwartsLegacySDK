#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRenderedCinematicInfo {
    FString OutVideoPath; // 0x0
    FString CinematicName; // 0x10
    FString Description; // 0x20
    FString SceneRigPath; // 0x30
    FString ShotgunStatus; // 0x40
    FString Tier; // 0x50
    bool bUploadToShotgun; // 0x60
    bool bWasRenderSuccessful; // 0x61
    bool bAudioOnly; // 0x62
    bool bHasOverlay; // 0x63
    bool bUsingUnlit; // 0x64
    char pad_65[0x3];
    int32_t DesiredRecordTime; // 0x68
    int32_t ActualRecordTime; // 0x6c
}; // Size: 0x70
#pragma pack(pop)
