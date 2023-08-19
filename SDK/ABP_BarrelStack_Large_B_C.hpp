#pragma once
#include <cstdint>
#include "AActor.hpp"
class UPhysicalResponseComponent;
class UHierarchicalInstancedStaticMeshComponent;
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_BarrelStack_Large_B_C : public AActor {
public:
    UPhysicalResponseComponent* PhysicalResponse4; // 0x248
    UPhysicalResponseComponent* PhysicalResponse3; // 0x250
    UHierarchicalInstancedStaticMeshComponent* HISM_3SM_Int_BCProps_Barrel_001_W; // 0x258
    UHierarchicalInstancedStaticMeshComponent* HISM_2SM_Int_BCProps_Barrel_Fat_001_W; // 0x260
    UStaticMeshComponent* SM_BarrelRack_B; // 0x268
    UPhysicalResponseComponent* PhysicalResponse; // 0x270
    UStaticMeshComponent* StaticMeshComponent34; // 0x278
    UStaticMeshComponent* StaticMeshComponent33; // 0x280
    USceneComponent* SharedRoot; // 0x288
    static ABP_BarrelStack_Large_B_C* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
