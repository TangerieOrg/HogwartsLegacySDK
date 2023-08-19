#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FNiagaraHelpersVarNameLinearColor.hpp"
#pragma pack(push, 1)
struct FNiagaraHelpersInitializerLinearColor {
    FNiagaraHelpersVarNameLinearColor Variable; // 0x0
    FLinearColor Value; // 0x8
}; // Size: 0x18
#pragma pack(pop)
