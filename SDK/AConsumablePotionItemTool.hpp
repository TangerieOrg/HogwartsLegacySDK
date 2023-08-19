#pragma once
#include <cstdint>
#include "AInventoryItemTool.hpp"
class UStaticMeshComponent;
class UNiagaraComponent;
class UParticleSystem;
class UNiagaraSystem;
class UClass;
#pragma pack(push, 1)
class AConsumablePotionItemTool : public AInventoryItemTool {
public:
    UStaticMeshComponent* PotionMesh; // 0x430
    UNiagaraComponent* LiquidParticleSystem; // 0x438
    float LiquidDrainTime; // 0x440
    char pad_444[0x4];
    UParticleSystem* PotionConsumeVFX; // 0x448
    UNiagaraSystem* NiagaraPotionConsumeVFX; // 0x450
    FName VFXBoneAttachmentName; // 0x458
    UNiagaraComponent* PotionConsumeNiagaraComponent; // 0x460
    UClass* PotionBottlePhysicsClass; // 0x468
    char pad_470[0x18];
    static AConsumablePotionItemTool* StaticClass();
    void ThrowPotionBottleTimerExpired();
    void ThrowPotionBottle();
    void DrinkPotion();
}; // Size: 0x488
#pragma pack(pop)
