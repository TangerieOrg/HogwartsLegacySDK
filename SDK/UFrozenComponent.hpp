#pragma once
#include <cstdint>
#include "FFrozenData.hpp"
#include "UStateEffectComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UFrozenComponent : public UStateEffectComponent {
public:
    bool bStartFrozen; // 0x190
    char pad_191[0x3];
    float InitialDuration; // 0x194
    FFrozenData FrozenData; // 0x198
    TArray<AActor*> FrozenActors; // 0x1d0
    char pad_1e0[0x30];
    static UFrozenComponent* StaticClass();
    void SetupDelegate();
    bool RemoveFrozenActor(AActor* OutFrozenActor);
    void OnBroken(AActor* Actor);
    void ClearFrozenActors();
    void AddToInstanceList(AActor* InInstigator, int32_t InMaxObjectInstancesPerInstigator, int32_t InMaxCharacterInstancesPerInstigator);
    void AddFrozenActor(AActor* InFrozenActor);
}; // Size: 0x210
#pragma pack(pop)
