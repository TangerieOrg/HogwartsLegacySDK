#pragma once
#include <cstdint>
#include "ATargetPoint.hpp"
#include "ESpawnVolumeType.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FVector2D.hpp"
class UPrimitiveComponent;
class UTextRenderComponent;
struct FSpawnProperties;
#pragma pack(push, 1)
class ASpawnLocation : public ATargetPoint {
public:
    char pad_248[0x38];
    FDbSingleColumnInfo SpawnCategoryType; // 0x280
    TArray<FDbSingleColumnInfo> AdditionalSpawnCategoryTypes; // 0x308
    char pad_318[0x18];
    ESpawnVolumeType SpawnVolumeType; // 0x330
    char pad_331[0x7];
    UPrimitiveComponent* SpawnVolume; // 0x338
    bool bEnableScatterSampling; // 0x340
    bool bEnableRandomRotation; // 0x341
    bool bSpawnOnNavMesh; // 0x342
    bool bForceSpawnOnFloor; // 0x343
    int32_t GridCols; // 0x344
    int32_t GridRows; // 0x348
    FVector2D ScatterVariance; // 0x34c
    char pad_354[0x94];
    UTextRenderComponent* DebugTextVisualizer; // 0x3e8
    char pad_3f0[0x18];
    static ASpawnLocation* StaticClass();
    void StopSpawning(FName& GroupIn);
    void StartSpawningUsingProbability(FSpawnProperties& SpawnProperiesIn, FName& GroupIn, float& SpawnProbability, int32_t& NumActorsPerClassIn, int32_t InFirstActorGroupIndex);
    void StartSpawning(FSpawnProperties& SpawnProperiesIn, FName& GroupIn);
    void SetSpawnCategorySelection(FString InSpawnCatType);
    bool IsSpawning(FName& GroupIn);
    void InitScatterGrid();
    void CacheVolumeBounds();
}; // Size: 0x408
#pragma pack(pop)
