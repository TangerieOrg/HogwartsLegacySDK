#pragma once
#include <cstdint>
#include "ULockableComponent.hpp"
class USkeletalMeshComponent;
class USkeletalMesh;
class UNiagaraSystem;
class UNiagaraComponent;
class UStaticMeshComponent;
class AAmbulatory_Character;
class UAnimationAsset;
class UStaticMesh;
#pragma pack(push, 1)
class UPearLockComponent : public ULockableComponent {
public:
    USkeletalMeshComponent* PearMeshComponent; // 0x220
    UStaticMeshComponent* DoorknobMeshComponent; // 0x228
    USkeletalMesh* PearMesh; // 0x230
    UAnimationAsset* LaughingAnimation; // 0x238
    UStaticMesh* DoorknobMesh; // 0x240
    float TickleTime; // 0x248
    char pad_24c[0x4];
    UNiagaraSystem* PearDoorknobTransformSystem; // 0x250
    UNiagaraComponent* PearDoorknobComponent; // 0x258
    AAmbulatory_Character* Character; // 0x260
    char pad_268[0x8];
    static UPearLockComponent* StaticClass();
    void ReplacePearDoorknob();
    void DestroyPearMeshComponent();
}; // Size: 0x270
#pragma pack(pop)
