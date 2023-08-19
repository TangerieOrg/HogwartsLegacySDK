#pragma once
#include <cstdint>
#include "ENCPoolMethod.hpp"
#include "ENiagaraExecutionState.hpp"
#include "FNiagaraOutlinerEmitterInstanceData.hpp"
#include "FNiagaraOutlinerTimingData.hpp"
#include "FNiagaraScalabilityState.hpp"
#pragma pack(push, 1)
struct FNiagaraOutlinerSystemInstanceData {
    FString ComponentName; // 0x0
    TArray<FNiagaraOutlinerEmitterInstanceData> Emitters; // 0x10
    ENiagaraExecutionState ActualExecutionState; // 0x20
    ENiagaraExecutionState RequestedExecutionState; // 0x24
    FNiagaraScalabilityState ScalabilityState; // 0x28
    uint8_t bPendingKill : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x3];
    ENCPoolMethod PoolMethod; // 0x34
    char pad_35[0x3];
    FNiagaraOutlinerTimingData AverageTime; // 0x38
    FNiagaraOutlinerTimingData MaxTime; // 0x40
}; // Size: 0x48
#pragma pack(pop)
