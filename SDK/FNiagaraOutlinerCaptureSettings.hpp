#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraOutlinerCaptureSettings {
    bool bTriggerCapture; // 0x0
    char pad_1[0x3];
    uint32_t CaptureDelayFrames; // 0x4
    bool bGatherPerfData; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
