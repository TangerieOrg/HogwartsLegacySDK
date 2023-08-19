#pragma once
#include <cstdint>
#include "UAnimNotifyState_TimedNiagaraEffect.hpp"
class UMeshComponent;
#pragma pack(push, 1)
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect {
public:
    char pad_60[0x50];
    static UAnimNotifyState_TimedNiagaraEffectAdvanced* StaticClass();
    float GetNotifyProgress(UMeshComponent* MeshComp);
}; // Size: 0xb0
#pragma pack(pop)
