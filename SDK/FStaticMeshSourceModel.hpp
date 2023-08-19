#pragma once
#include <cstdint>
#include "FMeshBuildSettings.hpp"
#include "FMeshReductionSettings.hpp"
#include "FPerPlatformFloat.hpp"
#include "FPerPlatformInt.hpp"
#pragma pack(push, 1)
struct FStaticMeshSourceModel {
    FMeshBuildSettings BuildSettings; // 0x0
    FMeshReductionSettings ReductionSettings; // 0x30
    float LODDistance; // 0x58
    FPerPlatformFloat ScreenSize; // 0x5c
    FPerPlatformInt ForceShadowProxyLOD; // 0x60
    char pad_64[0x4];
    FString SourceImportFilename; // 0x68
}; // Size: 0x78
#pragma pack(pop)
