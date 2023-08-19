#pragma once
#include <cstdint>
#include "AActor.hpp"
class USeasonSelectorComponent;
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_bogTree_Oak_LargeB_planted_C : public AActor {
public:
    USeasonSelectorComponent* SeasonSelector; // 0x248
    UStaticMeshComponent* SM_BogTree_Oak_LargeB_SwampParts2; // 0x250
    UStaticMeshComponent* SM_BogTree_Oak_LargeB_SwampParts1; // 0x258
    UStaticMeshComponent* SM_BogTree_Oak_LargeB2; // 0x260
    USceneComponent* SharedRoot; // 0x268
    static ABP_bogTree_Oak_LargeB_planted_C* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
