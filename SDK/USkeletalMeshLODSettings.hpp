#pragma once
#include <cstdint>
#include "FPerPlatformBool.hpp"
#include "FPerPlatformInt.hpp"
#include "FSkeletalMeshLODGroupSettings.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class USkeletalMeshLODSettings : public UDataAsset {
public:
    FPerPlatformInt MinLOD; // 0x30
    FPerPlatformBool DisableBelowMinLodStripping; // 0x34
    bool bOverrideLODStreamingSettings; // 0x35
    FPerPlatformBool bSupportLODStreaming; // 0x36
    char pad_37[0x1];
    FPerPlatformInt MaxNumStreamedLODs; // 0x38
    FPerPlatformInt MaxNumOptionalLODs; // 0x3c
    TArray<FSkeletalMeshLODGroupSettings> LODGroups; // 0x40
    static USkeletalMeshLODSettings* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
