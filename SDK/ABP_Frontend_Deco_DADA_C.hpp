#pragma once
#include <cstdint>
#include "AActor.hpp"
class USkeletalMeshComponent;
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Frontend_Deco_DADA_C : public AActor {
public:
    USkeletalMeshComponent* SK_TrainingDummy; // 0x248
    UStaticMeshComponent* SM_Sanc_Skull_Dwiz_01A; // 0x250
    UStaticMeshComponent* SM_BCProps_Rope_002; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    static ABP_Frontend_Deco_DADA_C* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
