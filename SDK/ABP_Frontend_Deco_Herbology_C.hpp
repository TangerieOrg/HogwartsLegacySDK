#pragma once
#include <cstdint>
#include "AActor.hpp"
class USkeletalMeshComponent;
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Frontend_Deco_Herbology_C : public AActor {
public:
    USkeletalMeshComponent* SkeletalFlower; // 0x248
    USkeletalMeshComponent* SkeletalFlower2; // 0x250
    USkeletalMeshComponent* SkeletalFlower1; // 0x258
    USkeletalMeshComponent* SkeletalBody; // 0x260
    UStaticMeshComponent* SM_HW_HB_PlantPot_A; // 0x268
    USceneComponent* DefaultSceneRoot; // 0x270
    static ABP_Frontend_Deco_Herbology_C* StaticClass();
}; // Size: 0x278
#pragma pack(pop)
