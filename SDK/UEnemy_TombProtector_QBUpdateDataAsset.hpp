#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UDataAsset.hpp"
class UClass;
#pragma pack(push, 1)
class UEnemy_TombProtector_QBUpdateDataAsset : public UDataAsset {
public:
    bool bSpawnMeteors; // 0x30
    char pad_31[0x3];
    FVector SpawnDistance; // 0x34
    FVector SpawnDistanceVariationMin; // 0x40
    FVector SpawnDistanceVariationMax; // 0x4c
    FVector ChooseDistance; // 0x58
    float ScaleMin; // 0x64
    float ScaleMax; // 0x68
    int32_t NumMeteorsToSpawn; // 0x6c
    float OrbitRotationMin; // 0x70
    float OrbitRotationMax; // 0x74
    FVector RotationMin; // 0x78
    FVector RotationMax; // 0x84
    TArray<UClass*> MeteorClassList; // 0x90
    TArray<UClass*> MeteorPieceClassList; // 0xa0
    int32_t NumPiecesMin; // 0xb0
    int32_t NumPiecesMax; // 0xb4
    float PiecesSpawnOffsetMin; // 0xb8
    float PiecesSpawnOffsetMax; // 0xbc
    float PiecesScaleMin; // 0xc0
    float PiecesScaleMax; // 0xc4
    float BreakApartSpeedMin; // 0xc8
    float BreakApartSpeedMax; // 0xcc
    FVector BreakApartRotationMin; // 0xd0
    FVector BreakApartRotationMax; // 0xdc
    float MinAccuracy; // 0xe8
    float MaxAccuracy; // 0xec
    FVector ThrowRotDegreesMin; // 0xf0
    FVector ThrowRotDegreesMax; // 0xfc
    static UEnemy_TombProtector_QBUpdateDataAsset* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
