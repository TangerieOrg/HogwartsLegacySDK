#pragma once
#include <cstdint>
#include "FChunkPartData.hpp"
#include "FSHAHashData.hpp"
#pragma pack(push, 1)
struct FFileManifestData {
    FString Filename; // 0x0
    FSHAHashData FileHash; // 0x10
    char pad_24[0x4];
    TArray<FChunkPartData> FileChunkParts; // 0x28
    TArray<FString> InstallTags; // 0x38
    bool bIsUnixExecutable; // 0x48
    char pad_49[0x7];
    FString SymlinkTarget; // 0x50
    bool bIsReadOnly; // 0x60
    bool bIsCompressed; // 0x61
    char pad_62[0x6];
}; // Size: 0x68
#pragma pack(pop)
