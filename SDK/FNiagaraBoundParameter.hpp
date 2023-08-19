#pragma once
#include <cstdint>
#include "FNiagaraVariable.hpp"
#pragma pack(push, 1)
struct FNiagaraBoundParameter {
    FNiagaraVariable Parameter; // 0x0
    int32_t SrcOffset; // 0x20
    int32_t DestOffset; // 0x24
}; // Size: 0x28
#pragma pack(pop)
