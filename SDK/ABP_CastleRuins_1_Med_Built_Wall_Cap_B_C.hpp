#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class UBoxComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_CastleRuins_1_Med_Built_Wall_Cap_B_C : public AActor {
public:
    UStaticMeshComponent* StaticMeshComponent011; // 0x248
    UStaticMeshComponent* StaticMeshComponent010; // 0x250
    UStaticMeshComponent* StaticMeshComponent09; // 0x258
    UStaticMeshComponent* StaticMeshComponent08; // 0x260
    UStaticMeshComponent* StaticMeshComponent07; // 0x268
    UStaticMeshComponent* StaticMeshComponent06; // 0x270
    UStaticMeshComponent* StaticMeshComponent012; // 0x278
    UStaticMeshComponent* StaticMeshComponent04; // 0x280
    UStaticMeshComponent* StaticMeshComponent03; // 0x288
    UStaticMeshComponent* StaticMeshComponent02; // 0x290
    UStaticMeshComponent* StaticMeshComponent01; // 0x298
    UStaticMeshComponent* StaticMeshComponent0; // 0x2a0
    UStaticMeshComponent* StaticMeshComponent05; // 0x2a8
    UBoxComponent* Box; // 0x2b0
    USceneComponent* SharedRoot; // 0x2b8
    static ABP_CastleRuins_1_Med_Built_Wall_Cap_B_C* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
