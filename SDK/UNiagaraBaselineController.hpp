#pragma once
#include <cstdint>
#include "FNiagaraPerfBaselineStats.hpp"
#include "UObject.hpp"
class UNiagaraEffectType;
class ANiagaraPerfBaselineActor;
class UNiagaraSystem;
#pragma pack(push, 1)
class UNiagaraBaselineController : public UObject {
public:
    float TestDuration; // 0x28
    char pad_2c[0x4];
    UNiagaraEffectType* EffectType; // 0x30
    ANiagaraPerfBaselineActor* Owner; // 0x38
    char pad_40[0x28];
    static UNiagaraBaselineController* StaticClass();
    bool OnTickTest();
    void OnOwnerTick(float DeltaTime);
    void OnEndTest(FNiagaraPerfBaselineStats Stats);
    void OnBeginTest();
    UNiagaraSystem* GetSystem();
}; // Size: 0x68
#pragma pack(pop)
