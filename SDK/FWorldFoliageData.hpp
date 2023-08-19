#pragma once
#include <cstdint>
#include "ETileState.hpp"
#include "FBox.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FWorldFoliageData {
    char pad_0[0x28];
    FVector LevelBoundsLocation; // 0x28
    FBox LevelBoundsMinMax; // 0x34
    float LevelBoundsRadius; // 0x50
    char pad_54[0x1c];
    TArray<FTransform> FoliageTransforms; // 0x70
    TArray<int32_t> ComponentAssignedTo; // 0x80
    TArray<int32_t> AddedInstancesIndex; // 0x90
    TArray<int32_t> TypeIndex; // 0xa0
    FString LevelName; // 0xb0
    int32_t NumInstances; // 0xc0
    int32_t NumAddedInstances; // 0xc4
    bool bNeedsUpdate; // 0xc8
    ETileState CurrentState; // 0xc9
    char pad_ca[0x26];
}; // Size: 0xf0
#pragma pack(pop)
