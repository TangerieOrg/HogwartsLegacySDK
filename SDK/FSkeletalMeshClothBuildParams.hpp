#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSkeletalMeshClothBuildParams {
    char pad_0[0x8];
    int32_t TargetLod; // 0x8
    bool bRemapParameters; // 0xc
    char pad_d[0x3];
    FString AssetName; // 0x10
    int32_t LODIndex; // 0x20
    int32_t SourceSection; // 0x24
    bool bRemoveFromMesh; // 0x28
    char pad_29[0x2f];
}; // Size: 0x58
#pragma pack(pop)
