#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Single_SkipStoneB_Interact_C : public AActor {
public:
    UStaticMeshComponent* SM_SkippingStone_B; // 0x248
    USceneComponent* Scene; // 0x250
    static ABP_Single_SkipStoneB_Interact_C* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
