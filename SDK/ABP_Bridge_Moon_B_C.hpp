#pragma once
#include <cstdint>
#include "AActor.hpp"
class UDecalComponent;
class UStaticMeshComponent;
class UHierarchicalInstancedStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Bridge_Moon_B_C : public AActor {
public:
    UDecalComponent* MI_HW_Decal_RockDamage_1; // 0x248
    UDecalComponent* MM_P_Decal_Wetness_drips; // 0x250
    UDecalComponent* MI_P_Decal_Stain5; // 0x258
    UStaticMeshComponent* Plane; // 0x260
    UStaticMeshComponent* SM_CastleDun_Jail_Wall_High; // 0x268
    UHierarchicalInstancedStaticMeshComponent* HISM_26SM_CastleRuins_2_Bricks_A_s; // 0x270
    UHierarchicalInstancedStaticMeshComponent* HISM_8SM_CastleRuins_2_Broken_B_a; // 0x278
    UHierarchicalInstancedStaticMeshComponent* HISM_7SM_CastleRuins_2_Broken_E; // 0x280
    UHierarchicalInstancedStaticMeshComponent* HISM_2SM_CastleRuins_2_Circular_A; // 0x288
    UHierarchicalInstancedStaticMeshComponent* HISM_4SM_CastleRuins_2_MainPillars_B_m; // 0x290
    UHierarchicalInstancedStaticMeshComponent* HISM_4SM_CastleRuins_2_MainPillars_B_n; // 0x298
    UHierarchicalInstancedStaticMeshComponent* HISM_20SM_CastleRuins_2_TheSlate_B_c; // 0x2a0
    UHierarchicalInstancedStaticMeshComponent* HISM_2SM_CastleRuins_2_Wall_V; // 0x2a8
    UHierarchicalInstancedStaticMeshComponent* HISM_19Cube; // 0x2b0
    USceneComponent* SharedRoot; // 0x2b8
    static ABP_Bridge_Moon_B_C* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
