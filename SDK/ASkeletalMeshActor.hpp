#pragma once
#include <cstdint>
#include "AActor.hpp"
class USkeletalMeshComponent;
class USkeletalMesh;
class UPhysicsAsset;
class UMaterialInterface;
#pragma pack(push, 1)
class ASkeletalMeshActor : public AActor {
public:
    char pad_248[0x8];
    uint8_t bShouldDoAnimNotifies : 1; // 0x250
    uint8_t bWakeOnLevelStart : 1; // 0x250
    uint8_t pad_bitfield_250_2 : 6;
    char pad_251[0x7];
    USkeletalMeshComponent* SkeletalMeshComponent; // 0x258
    USkeletalMesh* ReplicatedMesh; // 0x260
    UPhysicsAsset* ReplicatedPhysAsset; // 0x268
    UMaterialInterface* ReplicatedMaterial0; // 0x270
    UMaterialInterface* ReplicatedMaterial1; // 0x278
    char pad_280[0x50];
    static ASkeletalMeshActor* StaticClass();
    void OnRep_ReplicatedPhysAsset();
    void OnRep_ReplicatedMesh();
    void OnRep_ReplicatedMaterial1();
    void OnRep_ReplicatedMaterial0();
}; // Size: 0x2d0
#pragma pack(pop)
