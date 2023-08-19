#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FWorldFoliageData.hpp"
class AInstancedFoliageActor;
class UFoliageInstancedStaticMeshComponent;
#pragma pack(push, 1)
class ADynamicFarFoliageManager : public AActor {
public:
    AInstancedFoliageActor* HostInstancedFoliageActor; // 0x248
    TArray<UFoliageInstancedStaticMeshComponent*> HostInstancedFoliageComponents; // 0x250
    TArray<int32_t> ComponentsInstanceCount; // 0x260
    TArray<FWorldFoliageData> WorldFoliageData; // 0x270
    int32_t TotalInstancesCount; // 0x280
    char pad_284[0x10c];
    static ADynamicFarFoliageManager* StaticClass();
    void MainProcessIteration(float DeltaTime);
}; // Size: 0x390
#pragma pack(pop)
