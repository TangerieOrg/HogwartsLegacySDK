#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_RusticLamppostDressing_Reinforced_C : public AActor {
public:
    UStaticMeshComponent* SM_CastleDun_WoodenBeam_A3; // 0x248
    UStaticMeshComponent* SM_CastleDun_WoodenBeam_A2; // 0x250
    UStaticMeshComponent* SM_CastleDun_WoodenBeam_A1; // 0x258
    UStaticMeshComponent* SM_CastleDun_WoodenBeam_A; // 0x260
    USceneComponent* DefaultSceneRoot; // 0x268
    static ABP_RusticLamppostDressing_Reinforced_C* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
