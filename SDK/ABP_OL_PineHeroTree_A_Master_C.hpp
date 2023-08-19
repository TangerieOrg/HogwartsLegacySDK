#pragma once
#include <cstdint>
#include "AActor.hpp"
class USeasonSelectorComponent;
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_OL_PineHeroTree_A_Master_C : public AActor {
public:
    USeasonSelectorComponent* SeasonSelector; // 0x248
    UStaticMeshComponent* SM_OL_PineHeroTree_A_Canopy_COMBINED; // 0x250
    UStaticMeshComponent* SM_OL_PineHeroTree_A; // 0x258
    USceneComponent* SharedRoot; // 0x260
    static ABP_OL_PineHeroTree_A_Master_C* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
