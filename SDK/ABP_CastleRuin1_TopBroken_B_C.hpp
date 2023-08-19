#pragma once
#include <cstdint>
#include "AActor.hpp"
class UHierarchicalInstancedStaticMeshComponent;
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_CastleRuin1_TopBroken_B_C : public AActor {
public:
    UHierarchicalInstancedStaticMeshComponent* HISM_2SM_CastleRuins_1_Wall_Corner_Cap_A_B1; // 0x248
    UHierarchicalInstancedStaticMeshComponent* HISM_3SM_CastleRuins_1_Top_Trim_Cap_C1; // 0x250
    UStaticMeshComponent* SM_CastleRuins_1_TopBroken_C1; // 0x258
    UHierarchicalInstancedStaticMeshComponent* HISM_8SM_CastleRuins_1_Broken_End_cap_C1; // 0x260
    UHierarchicalInstancedStaticMeshComponent* HISM_2SM_CastleRuins_1_Broken_End_cap_D1; // 0x268
    UStaticMeshComponent* SM_CastleRuins_1_TopBroken_wall_A1; // 0x270
    USceneComponent* SharedRoot; // 0x278
    USceneComponent* DefaultSceneRoot; // 0x280
    static ABP_CastleRuin1_TopBroken_B_C* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
