#pragma once
#include <cstdint>
#include "FNiagaraOutlinerSystemInstanceData.hpp"
#include "FNiagaraOutlinerTimingData.hpp"
#pragma pack(push, 1)
struct FNiagaraOutlinerSystemData {
    TArray<FNiagaraOutlinerSystemInstanceData> SystemInstances; // 0x0
    FNiagaraOutlinerTimingData AveragePerFrameTime; // 0x10
    FNiagaraOutlinerTimingData MaxPerFrameTime; // 0x18
    FNiagaraOutlinerTimingData AveragePerInstanceTime; // 0x20
    FNiagaraOutlinerTimingData MaxPerInstanceTime; // 0x28
}; // Size: 0x30
#pragma pack(pop)
