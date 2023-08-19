#pragma once
#include <cstdint>
#include "FProceduralFoliageInstance.hpp"
#include "UObject.hpp"
class UProceduralFoliageSpawner;
#pragma pack(push, 1)
class UProceduralFoliageTile : public UObject {
public:
    UProceduralFoliageSpawner* FoliageSpawner; // 0x28
    char pad_30[0xa0];
    TArray<FProceduralFoliageInstance> InstancesArray; // 0xd0
    char pad_e0[0x78];
    static UProceduralFoliageTile* StaticClass();
}; // Size: 0x158
#pragma pack(pop)
