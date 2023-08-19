#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraSpawnInfo {
    int32_t Count; // 0x0
    float InterpStartDt; // 0x4
    float IntervalDt; // 0x8
    int32_t SpawnGroup; // 0xc
}; // Size: 0x10
#pragma pack(pop)
