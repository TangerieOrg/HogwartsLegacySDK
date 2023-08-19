#pragma once
#include <cstdint>
#include "FHairGroupDesc.hpp"
#include "UMeshComponent.hpp"
class UGroomAsset;
class UGroomCache;
class UMaterialInterface;
class UNiagaraComponent;
class USkeletalMesh;
class UNiagaraSystem;
class UGroomBindingAsset;
class UPhysicsAsset;
#pragma pack(push, 1)
class UGroomComponent : public UMeshComponent {
public:
    UGroomAsset* GroomAsset; // 0x4b0
    UGroomCache* GroomCache; // 0x4b8
    TArray<UNiagaraComponent*> NiagaraComponents; // 0x4c0
    USkeletalMesh* SourceSkeletalMesh; // 0x4d0
    UGroomBindingAsset* BindingAsset; // 0x4d8
    UPhysicsAsset* PhysicsAsset; // 0x4e0
    UMaterialInterface* Strands_DebugMaterial; // 0x4e8
    UMaterialInterface* Strands_DefaultMaterial; // 0x4f0
    UMaterialInterface* Cards_DefaultMaterial; // 0x4f8
    UMaterialInterface* Meshes_DefaultMaterial; // 0x500
    UNiagaraSystem* AngularSpringsSystem; // 0x508
    UNiagaraSystem* CosseratRodsSystem; // 0x510
    FString AttachmentName; // 0x518
    char pad_528[0x48];
    TArray<FHairGroupDesc> GroomGroupsDesc; // 0x570
    bool bRunning; // 0x580
    bool bLooping; // 0x581
    bool bManualTick; // 0x582
    char pad_583[0x1];
    float ElapsedTime; // 0x584
    char pad_588[0x48];
    static UGroomComponent* StaticClass();
    void SetGroomAsset(UGroomAsset* Asset);
    void SetBindingAsset(UGroomBindingAsset* InBinding);
}; // Size: 0x5d0
#pragma pack(pop)
