#pragma once
#include <cstdint>
#include "FChunkInfoData.hpp"
#include "FCustomFieldData.hpp"
#include "FFileManifestData.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UBuildPatchManifest : public UObject {
public:
    uint8_t ManifestFileVersion; // 0x28
    bool bIsFileData; // 0x29
    char pad_2a[0x2];
    uint32_t AppID; // 0x2c
    FString AppName; // 0x30
    FString BuildVersion; // 0x40
    FString LaunchExe; // 0x50
    FString LaunchCommand; // 0x60
    char pad_70[0x50];
    FString PrereqName; // 0xc0
    FString PrereqPath; // 0xd0
    FString PrereqArgs; // 0xe0
    TArray<FFileManifestData> FileManifestList; // 0xf0
    TArray<FChunkInfoData> ChunkList; // 0x100
    TArray<FCustomFieldData> CustomFields; // 0x110
    static UBuildPatchManifest* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
