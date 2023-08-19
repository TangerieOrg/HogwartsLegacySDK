#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UActorComponent.hpp"
class UProceduralFoliageSpawner;
class AVolume;
#pragma pack(push, 1)
class UProceduralFoliageComponent : public UActorComponent {
public:
    UProceduralFoliageSpawner* FoliageSpawner; // 0xc8
    float TileOverlap; // 0xd0
    char pad_d4[0x4];
    AVolume* SpawningVolume; // 0xd8
    FGuid ProceduralGuid; // 0xe0
    static UProceduralFoliageComponent* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
