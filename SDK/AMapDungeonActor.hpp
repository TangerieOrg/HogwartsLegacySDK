#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FLinearColor.hpp"
class UMaterialInstanceDynamic;
class UMapDungeonComponent;
class UMaterialInterface;
class UMaterial;
#pragma pack(push, 1)
class AMapDungeonActor : public AActor {
public:
    UMaterialInstanceDynamic* DungeonMaterialDynamic; // 0x248
    UMaterialInterface* DungeonMaterial; // 0x250
    UMapDungeonComponent* MapDungeonComponent; // 0x258
    TArray<UMaterial*> OverrideMaterials; // 0x260
    char pad_270[0x10];
    int32_t CurrentLayer; // 0x280
    FLinearColor CurrentLayerColor; // 0x284
    FLinearColor OtherLayerColor; // 0x294
    char pad_2a4[0x4];
    FDbSingleColumnInfo TestList; // 0x2a8
    char pad_330[0x18];
    TArray<FString> DataFiles; // 0x348
    char pad_358[0x38];
    static AMapDungeonActor* StaticClass();
}; // Size: 0x390
#pragma pack(pop)
