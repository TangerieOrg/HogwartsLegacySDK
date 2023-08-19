#pragma once
#include <cstdint>
#include "AActor.hpp"
class UCameraStackVolumeComponent;
class UStaticMeshComponent;
class UBoxComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Vault_Castle_B_Stairs_Small_C : public AActor {
public:
    UCameraStackVolumeComponent* CameraStackVolume2; // 0x248
    UBoxComponent* Box3; // 0x250
    UStaticMeshComponent* StaticMesh2; // 0x258
    UStaticMeshComponent* StaticMesh1; // 0x260
    UStaticMeshComponent* StaticMesh10; // 0x268
    UStaticMeshComponent* StaticMesh9; // 0x270
    UStaticMeshComponent* StaticMesh4; // 0x278
    UStaticMeshComponent* StaticMesh3; // 0x280
    UStaticMeshComponent* StaticMesh8; // 0x288
    UStaticMeshComponent* StaticMesh7; // 0x290
    UStaticMeshComponent* StaticMesh6; // 0x298
    UStaticMeshComponent* StaticMesh5; // 0x2a0
    UStaticMeshComponent* SM_CastleRuins_1_Bottom_Brick_A; // 0x2a8
    UStaticMeshComponent* StaticMesh; // 0x2b0
    UStaticMeshComponent* SM_CastleRuins_1_Top_Trim_Cap_A; // 0x2b8
    UStaticMeshComponent* StaticMeshComponent07; // 0x2c0
    UStaticMeshComponent* StaticMeshComponent06; // 0x2c8
    UStaticMeshComponent* StaticMeshComponent04; // 0x2d0
    USceneComponent* SharedRoot; // 0x2d8
    static ABP_Vault_Castle_B_Stairs_Small_C* StaticClass();
}; // Size: 0x2e0
#pragma pack(pop)
