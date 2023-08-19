#pragma once
#include <cstdint>
#include "AActor.hpp"
class UMultiFX2_Base;
class UPrimitiveComponent;
class UNiagaraComponent;
#pragma pack(push, 1)
class ACooldownPickup : public AActor {
public:
    TArray<UMultiFX2_Base*> SpawnFX; // 0x248
    TArray<UMultiFX2_Base*> CollectedFX; // 0x258
    TArray<UMultiFX2_Base*> FizzleFX; // 0x268
    UPrimitiveComponent* Prim; // 0x278
    UNiagaraComponent* NiagaraComponent; // 0x280
    char pad_288[0x90];
    static ACooldownPickup* StaticClass();
    void UnpauseAndShow();
    void PauseAndHide();
    void OnResetRecycle();
    void OnPickedUp(AActor* InActor);
    float GetDisablePickupTime();
    bool CanPickup();
}; // Size: 0x318
#pragma pack(pop)
