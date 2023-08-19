#pragma once
#include <cstdint>
#include "FSkeletalMeshSamplingBuiltData.hpp"
#include "FSkeletalMeshSamplingRegion.hpp"
#pragma pack(push, 1)
struct FSkeletalMeshSamplingInfo {
    TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
    FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
}; // Size: 0x30
#pragma pack(pop)
