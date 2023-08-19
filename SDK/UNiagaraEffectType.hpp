#pragma once
#include <cstdint>
#include "ENiagaraCullReaction.hpp"
#include "ENiagaraScalabilityUpdateFrequency.hpp"
#include "FGuid.hpp"
#include "FNiagaraEmitterScalabilitySettingsArray.hpp"
#include "FNiagaraPerfBaselineStats.hpp"
#include "FNiagaraSystemScalabilitySettings.hpp"
#include "FNiagaraSystemScalabilitySettingsArray.hpp"
#include "UObject.hpp"
class UNiagaraSignificanceHandler;
class UNiagaraBaselineController;
#pragma pack(push, 1)
class UNiagaraEffectType : public UObject {
public:
    ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28
    ENiagaraCullReaction CullReaction; // 0x2c
    UNiagaraSignificanceHandler* SignificanceHandler; // 0x30
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58
    char pad_68[0x8];
    UNiagaraBaselineController* PerformanceBaselineController; // 0x70
    FNiagaraPerfBaselineStats PerfBaselineStats; // 0x78
    FGuid PerfBaselineVersion; // 0x88
    static UNiagaraEffectType* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
