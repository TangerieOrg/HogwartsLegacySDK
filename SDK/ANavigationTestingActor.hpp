#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ENavCostDisplay\Type.hpp"
#include "FNavAgentProperties.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
class UCapsuleComponent;
class UClass;
class UNavigationInvokerComponent;
class ANavigationData;
#pragma pack(push, 1)
class ANavigationTestingActor : public AActor {
public:
    char pad_248[0x10];
    UCapsuleComponent* CapsuleComponent; // 0x258
    UNavigationInvokerComponent* InvokerComponent; // 0x260
    uint8_t bActAsNavigationInvoker : 1; // 0x268
    uint8_t pad_bitfield_268_1 : 7;
    char pad_269[0x7];
    FNavAgentProperties NavAgentProps; // 0x270
    FVector QueryingExtent; // 0x2a0
    char pad_2ac[0x4];
    ANavigationData* MyNavData; // 0x2b0
    FVector ProjectedLocation; // 0x2b8
    uint8_t bProjectedLocationValid : 1; // 0x2c4
    uint8_t bSearchStart : 1; // 0x2c4
    uint8_t pad_bitfield_2c4_2 : 6;
    char pad_2c5[0x3];
    float CostLimitFactor; // 0x2c8
    float MinimumCostLimit; // 0x2cc
    uint8_t bBacktracking : 1; // 0x2d0
    uint8_t bUseHierarchicalPathfinding : 1; // 0x2d0
    uint8_t bGatherDetailedInfo : 1; // 0x2d0
    uint8_t bDrawDistanceToWall : 1; // 0x2d0
    uint8_t bShowNodePool : 1; // 0x2d0
    uint8_t bShowBestPath : 1; // 0x2d0
    uint8_t bShowDiffWithPreviousStep : 1; // 0x2d0
    uint8_t bShouldBeVisibleInGame : 1; // 0x2d0
    char pad_2d1[0x3];
    ENavCostDisplay::Type CostDisplayMode; // 0x2d4
    char pad_2d5[0x3];
    FVector2D TextCanvasOffset; // 0x2d8
    uint8_t bPathExist : 1; // 0x2e0
    uint8_t bPathIsPartial : 1; // 0x2e0
    uint8_t bPathSearchOutOfNodes : 1; // 0x2e0
    uint8_t pad_bitfield_2e0_3 : 5;
    char pad_2e1[0x3];
    float PathfindingTime; // 0x2e4
    float PathCost; // 0x2e8
    int32_t PathfindingSteps; // 0x2ec
    ANavigationTestingActor* OtherActor; // 0x2f0
    UClass* FilterClass; // 0x2f8
    int32_t ShowStepIndex; // 0x300
    float OffsetFromCornersDistance; // 0x304
    char pad_308[0x30];
    static ANavigationTestingActor* StaticClass();
}; // Size: 0x338
#pragma pack(pop)
