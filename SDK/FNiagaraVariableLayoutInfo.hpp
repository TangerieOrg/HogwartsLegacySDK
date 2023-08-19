#pragma once
#include <cstdint>
#include "FNiagaraTypeLayoutInfo.hpp"
#pragma pack(push, 1)
struct FNiagaraVariableLayoutInfo {
    uint32_t FloatComponentStart; // 0x0
    uint32_t Int32ComponentStart; // 0x4
    uint32_t HalfComponentStart; // 0x8
    char pad_c[0x4];
    FNiagaraTypeLayoutInfo LayoutInfo; // 0x10
}; // Size: 0x70
#pragma pack(pop)
