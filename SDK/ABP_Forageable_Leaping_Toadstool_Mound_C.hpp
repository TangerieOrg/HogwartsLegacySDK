#pragma once
#include <cstdint>
#include "AForagable.hpp"
class UHierarchicalInstancedStaticMeshComponent;
class UStaticMeshComponent;
class UChildActorComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Forageable_Leaping_Toadstool_Mound_C : public AForagable {
public:
    UHierarchicalInstancedStaticMeshComponent* HISM_2SM_DeadLeafThick_01_Master; // 0x2c0
    UStaticMeshComponent* SM_DeadLeafThin_01_Master; // 0x2c8
    UHierarchicalInstancedStaticMeshComponent* HISM_25SM_Forageable_Leaping_Toadstools_H1; // 0x2d0
    UHierarchicalInstancedStaticMeshComponent* HISM_15SM_DeadLeafThick_01_Fall2; // 0x2d8
    UStaticMeshComponent* SM_Toadstools_Mound_Round1; // 0x2e0
    UHierarchicalInstancedStaticMeshComponent* HISM_19SM_Forageable_Leaping_Toadstools_I1; // 0x2e8
    UHierarchicalInstancedStaticMeshComponent* HISM_11SM_KidneyWeed_06; // 0x2f0
    UHierarchicalInstancedStaticMeshComponent* HISM_17SM_Forageable_Leaping_Toadstools_G1; // 0x2f8
    UChildActorComponent* BP_LeapingToadstool; // 0x300
    USceneComponent* SharedRoot; // 0x308
    static ABP_Forageable_Leaping_Toadstool_Mound_C* StaticClass();
}; // Size: 0x310
#pragma pack(pop)
