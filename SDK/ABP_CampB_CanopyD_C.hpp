#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_CampB_CanopyD_C : public AActor {
public:
    UStaticMeshComponent* StaticMeshComponent1; // 0x248
    USceneComponent* SharedRoot; // 0x250
    static ABP_CampB_CanopyD_C* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
