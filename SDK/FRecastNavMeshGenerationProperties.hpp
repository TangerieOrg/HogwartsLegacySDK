#pragma once
#include <cstdint>
#include "ERecastPartitioning\Type.hpp"
#pragma pack(push, 1)
struct FRecastNavMeshGenerationProperties {
    int32_t TilePoolSize; // 0x0
    float TileSizeUU; // 0x4
    float CellSize; // 0x8
    float CellHeight; // 0xc
    float AgentRadius; // 0x10
    float AgentHeight; // 0x14
    float AgentMaxSlope; // 0x18
    float AgentMaxStepHeight; // 0x1c
    float MinRegionArea; // 0x20
    float MergeRegionSize; // 0x24
    float MaxSimplificationError; // 0x28
    int32_t TileNumberHardLimit; // 0x2c
    ERecastPartitioning::Type RegionPartitioning; // 0x30
    ERecastPartitioning::Type LayerPartitioning; // 0x31
    char pad_32[0x2];
    int32_t RegionChunkSplits; // 0x34
    int32_t LayerChunkSplits; // 0x38
    uint8_t bSortNavigationAreasByCost : 1; // 0x3c
    uint8_t bPerformVoxelFiltering : 1; // 0x3c
    uint8_t bMarkLowHeightAreas : 1; // 0x3c
    uint8_t bUseExtraTopCellWhenMarkingAreas : 1; // 0x3c
    uint8_t bFilterLowSpanSequences : 1; // 0x3c
    uint8_t bFilterLowSpanFromTileCache : 1; // 0x3c
    uint8_t bFixedTilePoolSize : 1; // 0x3c
    uint8_t pad_bitfield_3c_7 : 1;
    char pad_3d[0x3];
}; // Size: 0x40
#pragma pack(pop)
