#pragma once
#include <cstdint>
#include "FSkeletalMeshSamplingLODBuiltData.hpp"
#include "FSkeletalMeshSamplingRegionBuiltData.hpp"
#pragma pack(push, 1)
struct FSkeletalMeshSamplingBuiltData {
    TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
    TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
}; // Size: 0x20
#pragma pack(pop)
