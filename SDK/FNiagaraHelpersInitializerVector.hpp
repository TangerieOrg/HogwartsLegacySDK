#pragma once
#include <cstdint>
#include "FNiagaraHelpersVarNameVector.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FNiagaraHelpersInitializerVector {
    FNiagaraHelpersVarNameVector Variable; // 0x0
    FVector Value; // 0x8
}; // Size: 0x14
#pragma pack(pop)
