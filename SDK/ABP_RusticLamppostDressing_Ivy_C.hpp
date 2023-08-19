#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_RusticLamppostDressing_Ivy_C : public AActor {
public:
    UStaticMeshComponent* SM_BCProps_Ivy_Wall_Bare_B1; // 0x248
    UStaticMeshComponent* SM_BCProps_Ivy_Wall_Bare_B; // 0x250
    UStaticMeshComponent* SM_BCProps_Ivy_Wall_Single_B1; // 0x258
    UStaticMeshComponent* SM_BCProps_Ivy_Wall_Single_B; // 0x260
    USceneComponent* DefaultSceneRoot; // 0x268
    static ABP_RusticLamppostDressing_Ivy_C* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
