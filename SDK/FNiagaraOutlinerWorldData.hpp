#pragma once
#include <cstdint>
#include "FNiagaraOutlinerTimingData.hpp"
#pragma pack(push, 1)
struct FNiagaraOutlinerWorldData {
    char pad_0[0x50];
    bool bHasBegunPlay; // 0x50
    uint8_t WorldType; // 0x51
    uint8_t NetMode; // 0x52
    char pad_53[0x1];
    FNiagaraOutlinerTimingData AveragePerFrameTime; // 0x54
    FNiagaraOutlinerTimingData MaxPerFrameTime; // 0x5c
    char pad_64[0x4];
}; // Size: 0x68
#pragma pack(pop)
