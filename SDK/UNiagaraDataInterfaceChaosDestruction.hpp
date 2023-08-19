#pragma once
#include <cstdint>
#include "EDataSortTypeEnum.hpp"
#include "EDataSourceTypeEnum.hpp"
#include "EDebugTypeEnum.hpp"
#include "ELocationFilteringModeEnum.hpp"
#include "ELocationXToSpawnEnum.hpp"
#include "ELocationYToSpawnEnum.hpp"
#include "ELocationZToSpawnEnum.hpp"
#include "ERandomVelocityGenerationTypeEnum.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface {
public:
    char pad_38[0x50];
    EDataSourceTypeEnum DataSourceType; // 0x88
    char pad_89[0x3];
    int32_t DataProcessFrequency; // 0x8c
    int32_t MaxNumberOfDataEntriesToSpawn; // 0x90
    bool DoSpawn; // 0x94
    char pad_95[0x3];
    FVector2D SpawnMultiplierMinMax; // 0x98
    float SpawnChance; // 0xa0
    FVector2D ImpulseToSpawnMinMax; // 0xa4
    FVector2D SpeedToSpawnMinMax; // 0xac
    FVector2D MassToSpawnMinMax; // 0xb4
    FVector2D ExtentMinToSpawnMinMax; // 0xbc
    FVector2D ExtentMaxToSpawnMinMax; // 0xc4
    FVector2D VolumeToSpawnMinMax; // 0xcc
    FVector2D SolverTimeToSpawnMinMax; // 0xd4
    int32_t SurfaceTypeToSpawn; // 0xdc
    ELocationFilteringModeEnum LocationFilteringMode; // 0xe0
    ELocationXToSpawnEnum LocationXToSpawn; // 0xe1
    char pad_e2[0x2];
    FVector2D LocationXToSpawnMinMax; // 0xe4
    ELocationYToSpawnEnum LocationYToSpawn; // 0xec
    char pad_ed[0x3];
    FVector2D LocationYToSpawnMinMax; // 0xf0
    ELocationZToSpawnEnum LocationZToSpawn; // 0xf8
    char pad_f9[0x3];
    FVector2D LocationZToSpawnMinMax; // 0xfc
    float TrailMinSpeedToSpawn; // 0x104
    EDataSortTypeEnum DataSortingType; // 0x108
    bool bGetExternalCollisionData; // 0x109
    bool DoSpatialHash; // 0x10a
    char pad_10b[0x1];
    FVector SpatialHashVolumeMin; // 0x10c
    FVector SpatialHashVolumeMax; // 0x118
    FVector SpatialHashVolumeCellSize; // 0x124
    int32_t MaxDataPerCell; // 0x130
    bool bApplyMaterialsFilter; // 0x134
    char pad_135[0x53];
    bool bGetExternalBreakingData; // 0x188
    bool bGetExternalTrailingData; // 0x189
    char pad_18a[0x2];
    FVector2D RandomPositionMagnitudeMinMax; // 0x18c
    float InheritedVelocityMultiplier; // 0x194
    ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType; // 0x198
    char pad_199[0x3];
    FVector2D RandomVelocityMagnitudeMinMax; // 0x19c
    float SpreadAngleMax; // 0x1a4
    FVector VelocityOffsetMin; // 0x1a8
    FVector VelocityOffsetMax; // 0x1b4
    FVector2D FinalVelocityMagnitudeMinMax; // 0x1c0
    float MaxLatency; // 0x1c8
    EDebugTypeEnum DebugType; // 0x1cc
    char pad_1cd[0x3];
    int32_t LastSpawnedPointID; // 0x1d0
    float LastSpawnTime; // 0x1d4
    char pad_1d8[0x10];
    float SolverTime; // 0x1e8
    float TimeStampOfLastProcessedData; // 0x1ec
    char pad_1f0[0x98];
    static UNiagaraDataInterfaceChaosDestruction* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
