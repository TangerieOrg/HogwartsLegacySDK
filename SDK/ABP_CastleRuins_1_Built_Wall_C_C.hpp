#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class UBoxComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_CastleRuins_1_Built_Wall_C_C : public AActor {
public:
    UStaticMeshComponent* StaticMesh4; // 0x248
    UStaticMeshComponent* StaticMesh3; // 0x250
    UStaticMeshComponent* StaticMesh2; // 0x258
    UStaticMeshComponent* StaticMesh1; // 0x260
    UStaticMeshComponent* StaticMesh; // 0x268
    UStaticMeshComponent* StaticMeshComponent09; // 0x270
    UStaticMeshComponent* StaticMeshComponent08; // 0x278
    UStaticMeshComponent* StaticMeshComponent07; // 0x280
    UStaticMeshComponent* StaticMeshComponent06; // 0x288
    UStaticMeshComponent* StaticMeshComponent05; // 0x290
    UStaticMeshComponent* SM_CastleRuins_1_Top_Trim_Cap_C; // 0x298
    UStaticMeshComponent* StaticMeshComponent03; // 0x2a0
    UStaticMeshComponent* StaticMeshComponent02; // 0x2a8
    UStaticMeshComponent* StaticMeshComponent01; // 0x2b0
    UStaticMeshComponent* StaticMeshComponent0; // 0x2b8
    UStaticMeshComponent* StaticMeshComponent04; // 0x2c0
    UBoxComponent* Box; // 0x2c8
    USceneComponent* SharedRoot; // 0x2d0
    static ABP_CastleRuins_1_Built_Wall_C_C* StaticClass();
}; // Size: 0x2d8
#pragma pack(pop)
