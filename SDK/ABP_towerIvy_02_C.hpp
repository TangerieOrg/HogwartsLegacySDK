#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_towerIvy_02_C : public AActor {
public:
    UStaticMeshComponent* SM_towerIvy_02; // 0x248
    USceneComponent* SharedRoot; // 0x250
    static ABP_towerIvy_02_C* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
