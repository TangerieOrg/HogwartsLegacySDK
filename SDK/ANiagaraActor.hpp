#pragma once
#include <cstdint>
#include "AActor.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class ANiagaraActor : public AActor {
public:
    UNiagaraComponent* NiagaraComponent; // 0x248
    uint8_t bDestroyOnSystemFinish : 1; // 0x250
    uint8_t pad_bitfield_250_1 : 7;
    char pad_251[0x7];
    static ANiagaraActor* StaticClass();
    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);
}; // Size: 0x258
#pragma pack(pop)
