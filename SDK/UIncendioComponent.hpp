#pragma once
#include <cstdint>
#include "FBurningMaterial.hpp"
#include "FVector.hpp"
#include "UStateEffectComponent.hpp"
class UMeshComponent;
class UStaticMeshComponent;
class UMaterialPropertyData;
class USphereComponent;
#pragma pack(push, 1)
class UIncendioComponent : public UStateEffectComponent {
public:
    FVector SpawnPos; // 0x190
    float InitialRadius; // 0x19c
    float RingWidth; // 0x1a0
    float BurnRate; // 0x1a4
    float BurnRateScale; // 0x1a8
    float JumpDistance; // 0x1ac
    float ParticleSpawnRateScale; // 0x1b0
    char pad_1b4[0x4];
    TArray<UMeshComponent*> OnFireMeshComponents; // 0x1b8
    TArray<UStaticMeshComponent*> CharredStaticMeshComponents; // 0x1c8
    USphereComponent* ContainmentSphere; // 0x1d8
    TArray<FBurningMaterial> BurningMaterials; // 0x1e0
    TArray<UMeshComponent*> UnburnedMeshes; // 0x1f0
    UMaterialPropertyData* MaterialPropertyData; // 0x200
    UMeshComponent* OrigMeshComponent; // 0x208
    char pad_210[0x78];
    static UIncendioComponent* StaticClass();
    bool IsPointOnFire(FVector Point, bool LimitToRing);
    bool IsComplete();
}; // Size: 0x288
#pragma pack(pop)
