#pragma once
#include <cstdint>
#include "FArtifactSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UEOSSettings : public UObject {
public:
    FString CacheDir; // 0x28
    FString DefaultArtifactName; // 0x38
    int32_t TickBudgetInMilliseconds; // 0x48
    bool bEnableOverlay; // 0x4c
    bool bEnableSocialOverlay; // 0x4d
    bool bShouldEnforceBeingLaunchedByEGS; // 0x4e
    char pad_4f[0x1];
    TArray<FString> TitleStorageTags; // 0x50
    int32_t TitleStorageReadChunkLength; // 0x60
    char pad_64[0x4];
    TArray<FArtifactSettings> Artifacts; // 0x68
    bool bUseEAS; // 0x78
    bool bUseEOSConnect; // 0x79
    bool bMirrorStatsToEOS; // 0x7a
    bool bMirrorAchievementsToEOS; // 0x7b
    bool bUseEOSSessions; // 0x7c
    bool bMirrorPresenceToEAS; // 0x7d
    char pad_7e[0x2];
    static UEOSSettings* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
