#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Frontend_Deco_Charms_C : public AActor {
public:
    UStaticMeshComponent* SM_HW_HourGlass_D; // 0x248
    UStaticMeshComponent* SM_HW_Book; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    static ABP_Frontend_Deco_Charms_C* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
