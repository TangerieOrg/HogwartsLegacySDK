#pragma once
#include <cstdint>
#include "AActor.hpp"
class USkeletalMeshComponent;
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Frontend_ButterbeerMug_C : public AActor {
public:
    USkeletalMeshComponent* VFX_SK_ButterBeerStein2_Fluid; // 0x248
    UStaticMeshComponent* SM_ButterBeerStein2; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    static ABP_Frontend_ButterbeerMug_C* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
