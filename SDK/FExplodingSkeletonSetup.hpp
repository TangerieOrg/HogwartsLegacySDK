#pragma once
#include <cstdint>
#include "FExplodingSkeletonBoneMeshSetup.hpp"
#include "FExplodingSkeletonGenericMeshSetup.hpp"
#include "FExplodingSkeletonSetupTimers.hpp"
#pragma pack(push, 1)
struct FExplodingSkeletonSetup {
    TArray<FExplodingSkeletonBoneMeshSetup> Attached; // 0x0
    FExplodingSkeletonSetupTimers AttachedBaseTimers; // 0x10
    TArray<FExplodingSkeletonGenericMeshSetup> Generic; // 0x18
    FExplodingSkeletonSetupTimers GenericBaseTimers; // 0x28
}; // Size: 0x30
#pragma pack(pop)
