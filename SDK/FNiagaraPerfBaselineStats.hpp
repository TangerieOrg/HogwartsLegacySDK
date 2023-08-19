#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraPerfBaselineStats {
    float PerInstanceAvg_GT; // 0x0
    float PerInstanceAvg_RT; // 0x4
    float PerInstanceMax_GT; // 0x8
    float PerInstanceMax_RT; // 0xc
}; // Size: 0x10
#pragma pack(pop)
