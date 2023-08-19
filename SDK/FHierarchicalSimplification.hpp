#pragma once
#include <cstdint>
#include "FMeshMergingSettings.hpp"
#include "FMeshProxySettings.hpp"
#pragma pack(push, 1)
struct FHierarchicalSimplification {
    float TransitionScreenSize; // 0x0
    float OverrideDrawDistance; // 0x4
    uint8_t bUseOverrideDrawDistance : 1; // 0x8
    uint8_t bAllowSpecificExclusion : 1; // 0x8
    uint8_t bSimplifyMesh : 1; // 0x8
    uint8_t bOnlyGenerateClustersForVolumes : 1; // 0x8
    uint8_t bReusePreviousLevelClusters : 1; // 0x8
    uint8_t pad_bitfield_8_5 : 3;
    char pad_9[0x3];
    FMeshProxySettings ProxySetting; // 0xc
    FMeshMergingSettings MergeSetting; // 0xbc
    float DesiredBoundRadius; // 0x15c
    float DesiredFillingPercentage; // 0x160
    int32_t MinNumberOfActorsToBuild; // 0x164
}; // Size: 0x168
#pragma pack(pop)
