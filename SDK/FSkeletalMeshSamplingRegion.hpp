#pragma once
#include <cstdint>
#include "FSkeletalMeshSamplingRegionBoneFilter.hpp"
#include "FSkeletalMeshSamplingRegionMaterialFilter.hpp"
#pragma pack(push, 1)
struct FSkeletalMeshSamplingRegion {
    FName Name; // 0x0
    int32_t LODIndex; // 0x8
    uint8_t bSupportUniformlyDistributedSampling : 1; // 0xc
    uint8_t pad_bitfield_c_1 : 7;
    char pad_d[0x3];
    TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
    TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
}; // Size: 0x30
#pragma pack(pop)
