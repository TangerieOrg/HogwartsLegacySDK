#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Frontend_BroomStand_C : public AActor {
public:
    UStaticMeshComponent* SM_CastleDun_WoodenBeamPeg_A1; // 0x248
    UStaticMeshComponent* SM_CastleDun_WoodenBeamPeg_A; // 0x250
    UStaticMeshComponent* GC_BCProps_BroomStand_001_W_Piece_02; // 0x258
    UStaticMeshComponent* GC_BCProps_BroomStand_001_W_Piece_01; // 0x260
    USceneComponent* DefaultSceneRoot; // 0x268
    static ABP_Frontend_BroomStand_C* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
