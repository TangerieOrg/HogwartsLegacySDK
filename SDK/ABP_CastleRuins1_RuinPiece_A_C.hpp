#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_CastleRuins1_RuinPiece_A_C : public AActor {
public:
    UStaticMeshComponent* SM_CastleRuins_1_Bottom_Wall_Damaged_A_265; // 0x248
    UStaticMeshComponent* SM_CastleRuins_1_Bottom_Brick_A; // 0x250
    USceneComponent* SharedRoot; // 0x258
    static ABP_CastleRuins1_RuinPiece_A_C* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
