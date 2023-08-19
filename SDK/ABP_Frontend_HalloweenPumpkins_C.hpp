#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Frontend_HalloweenPumpkins_C : public AActor {
public:
    UStaticMeshComponent* SM_HM_Pumpkin_Stack_A; // 0x248
    UStaticMeshComponent* SM_Sanc_HaloweenPumkins_01A; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    static ABP_Frontend_HalloweenPumpkins_C* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
