#pragma once
#include <cstdint>
#include "AActor.hpp"
class UHierarchicalInstancedStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_CastleRuins_3_Floor_E_C : public AActor {
public:
    UHierarchicalInstancedStaticMeshComponent* HISM_4SM_CastleRuins_3_Bricks_A_o; // 0x248
    UHierarchicalInstancedStaticMeshComponent* HISM_10SM_CastleRuins_3_Bricks_A_n; // 0x250
    UHierarchicalInstancedStaticMeshComponent* HISM_6SM_CastleRuins_3_Bricks_A_g; // 0x258
    UHierarchicalInstancedStaticMeshComponent* HISM_7SM_CastleRuins_3_Bricks_A_d; // 0x260
    UHierarchicalInstancedStaticMeshComponent* HISM_10SM_CastleRuins_3_Bricks_A_c; // 0x268
    UHierarchicalInstancedStaticMeshComponent* HISM_4SM_CastleRuins_3_Bricks_A_b; // 0x270
    UHierarchicalInstancedStaticMeshComponent* HISM_4SM_CastleRuins_3_Bricks_A_a; // 0x278
    USceneComponent* SharedRoot; // 0x280
    static ABP_CastleRuins_3_Floor_E_C* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
