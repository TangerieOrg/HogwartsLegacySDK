#pragma once
#include <cstdint>
#include "FFoliageTypeObject.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UProceduralFoliageSpawner : public UObject {
public:
    int32_t RandomSeed; // 0x28
    float TileSize; // 0x2c
    int32_t NumUniqueTiles; // 0x30
    float MinimumQuadTreeSize; // 0x34
    char pad_38[0x8];
    TArray<FFoliageTypeObject> FoliageTypes; // 0x40
    char pad_50[0x18];
    static UProceduralFoliageSpawner* StaticClass();
    void Simulate(int32_t NumSteps);
}; // Size: 0x68
#pragma pack(pop)
