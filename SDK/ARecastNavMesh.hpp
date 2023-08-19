#pragma once
#include <cstdint>
#include "ANavigationData.hpp"
#include "ERecastPartitioning\Type.hpp"
#include "FBox.hpp"
#include "FVector.hpp"
class UClass;
#pragma pack(push, 1)
class ARecastNavMesh : public ANavigationData {
public:
    uint8_t bDrawTriangleEdges : 1; // 0x450
    uint8_t bDrawPolyEdges : 1; // 0x450
    uint8_t bDrawFilledPolys : 1; // 0x450
    uint8_t bDrawNavMeshEdges : 1; // 0x450
    uint8_t bDrawTileBounds : 1; // 0x450
    uint8_t bDrawPathCollidingGeometry : 1; // 0x450
    uint8_t bDrawTileLabels : 1; // 0x450
    uint8_t bDrawPolygonLabels : 1; // 0x450
    uint8_t bDrawDefaultPolygonCost : 1; // 0x451
    uint8_t bDrawPolygonFlags : 1; // 0x451
    uint8_t bDrawLabelsOnPathNodes : 1; // 0x451
    uint8_t bDrawNavLinks : 1; // 0x451
    uint8_t bDrawFailedNavLinks : 1; // 0x451
    uint8_t bDrawClusters : 1; // 0x451
    uint8_t bDrawOctree : 1; // 0x451
    uint8_t bDrawOctreeDetails : 1; // 0x451
    uint8_t bDrawMarkedForbiddenPolys : 1; // 0x452
    uint8_t bDistinctlyDrawTilesBeingBuilt : 1; // 0x452
    uint8_t pad_bitfield_452_2 : 6;
    char pad_453[0x1];
    float DrawOffset; // 0x454
    uint8_t bFixedTilePoolSize : 1; // 0x458
    uint8_t pad_bitfield_458_1 : 7;
    char pad_459[0x3];
    int32_t TilePoolSize; // 0x45c
    float TileSizeUU; // 0x460
    float CellSize; // 0x464
    float CellHeight; // 0x468
    float AgentRadius; // 0x46c
    float AgentHeight; // 0x470
    float AgentMaxSlope; // 0x474
    float AgentMaxStepHeight; // 0x478
    float MinRegionArea; // 0x47c
    float MergeRegionSize; // 0x480
    float MaxSimplificationError; // 0x484
    int32_t MaxSimultaneousTileGenerationJobsCount; // 0x488
    int32_t TileNumberHardLimit; // 0x48c
    int32_t PolyRefTileBits; // 0x490
    int32_t PolyRefNavPolyBits; // 0x494
    int32_t PolyRefSaltBits; // 0x498
    FVector NavMeshOriginOffset; // 0x49c
    float DefaultDrawDistance; // 0x4a8
    float DefaultMaxSearchNodes; // 0x4ac
    float DefaultMaxHierarchicalSearchNodes; // 0x4b0
    ERecastPartitioning::Type RegionPartitioning; // 0x4b4
    ERecastPartitioning::Type LayerPartitioning; // 0x4b5
    char pad_4b6[0x2];
    int32_t RegionChunkSplits; // 0x4b8
    int32_t LayerChunkSplits; // 0x4bc
    uint8_t bSortNavigationAreasByCost : 1; // 0x4c0
    uint8_t bPerformVoxelFiltering : 1; // 0x4c0
    uint8_t bMarkLowHeightAreas : 1; // 0x4c0
    uint8_t bUseExtraTopCellWhenMarkingAreas : 1; // 0x4c0
    uint8_t bFilterLowSpanSequences : 1; // 0x4c0
    uint8_t bFilterLowSpanFromTileCache : 1; // 0x4c0
    uint8_t bDoFullyAsyncNavDataGathering : 1; // 0x4c0
    uint8_t bUseBetterOffsetsFromCorners : 1; // 0x4c0
    uint8_t bStoreEmptyTileLayers : 1; // 0x4c1
    uint8_t bUseVirtualFilters : 1; // 0x4c1
    uint8_t bAllowNavLinkAsPathEnd : 1; // 0x4c1
    uint8_t bUseVoxelCache : 1; // 0x4c1
    uint8_t pad_bitfield_4c1_4 : 4;
    char pad_4c2[0x2];
    float TileSetUpdateInterval; // 0x4c4
    float HeuristicScale; // 0x4c8
    float VerticalDeviationFromGroundCompensation; // 0x4cc
    char pad_4d0[0x30];
    static ARecastNavMesh* StaticClass();
    bool K2_ReplaceAreaInTileBounds(FBox Bounds, UClass* OldArea, UClass* NewArea, bool ReplaceLinks);
}; // Size: 0x500
#pragma pack(pop)
