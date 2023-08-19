#pragma once
#include <cstdint>
#include "FNiagaraHelpersVarNameQuat.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FNiagaraHelpersInitializerRotator {
    FNiagaraHelpersVarNameQuat Variable; // 0x0
    FRotator Value; // 0x8
}; // Size: 0x14
#pragma pack(pop)
