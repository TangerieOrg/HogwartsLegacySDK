#pragma once
#include <cstdint>
#include "AActor.hpp"
class UDecalComponent;
class UStaticMeshComponent;
class UHierarchicalInstancedStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Small_CastleRuins_1_B1_C : public AActor {
public:
    UDecalComponent* MI_Castle_Ruin1_WhiteLichen3; // 0x248
    UDecalComponent* MI_CastleDun_Decal_Lichen_Test_F5_108; // 0x250
    UDecalComponent* MI_CastleDun_Decal_Lichen_Test_F4_106; // 0x258
    UDecalComponent* MI_P_Decal_Stain10_104; // 0x260
    UDecalComponent* MI_Castle_Ruin1_WhiteLichen2_102; // 0x268
    UDecalComponent* MI_CastleDun_Decal_Lichen_Test_F3_100; // 0x270
    UDecalComponent* MI_CastleDun_Decal_Lichen_Test_F2_98; // 0x278
    UStaticMeshComponent* SM_CastleRuins_2_Bricks_A_e; // 0x280
    UStaticMeshComponent* SM_CastleRuins_1_Broken_C_a1; // 0x288
    UStaticMeshComponent* SM_CastleRuins_1_Broken_B_b1; // 0x290
    UHierarchicalInstancedStaticMeshComponent* HISM_2SM_CastleRuins_1_Wall_Corner_Cap_A1_B; // 0x298
    UHierarchicalInstancedStaticMeshComponent* HISM_2SM_CastleRuins_1_Broken_B_c1; // 0x2a0
    UStaticMeshComponent* SM_CastleRuins_1_Broken_F_a1; // 0x2a8
    UHierarchicalInstancedStaticMeshComponent* HISM_3SM_CastleRuins_2_Bricks_A_f; // 0x2b0
    UHierarchicalInstancedStaticMeshComponent* HISM_2SM_CastleRuinsSmall_1_Wall_A_j1; // 0x2b8
    UHierarchicalInstancedStaticMeshComponent* HISM_2SM_CastleRuinsSmall_1_Wall_A_i1; // 0x2c0
    USceneComponent* SharedRoot; // 0x2c8
    static ABP_Small_CastleRuins_1_B1_C* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
