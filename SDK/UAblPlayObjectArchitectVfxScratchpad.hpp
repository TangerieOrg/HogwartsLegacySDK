#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UNiagaraComponent;
class UAblTaskConditionScratchpad;
class UParticleSystemComponent;
#pragma pack(push, 1)
class UAblPlayObjectArchitectVfxScratchpad : public UAblAbilityTaskScratchPad {
public:
    UNiagaraComponent* NiagaraComp; // 0x28
    UParticleSystemComponent* ParticleComp; // 0x30
    TArray<UAblTaskConditionScratchpad*> ConditionScratchpads; // 0x38
    static UAblPlayObjectArchitectVfxScratchpad* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
