#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FNiagaraScriptHighlight {
    FLinearColor Color; // 0x0
    char pad_10[0x18];
}; // Size: 0x28
#pragma pack(pop)
