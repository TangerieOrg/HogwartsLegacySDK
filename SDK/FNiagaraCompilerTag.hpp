#pragma once
#include <cstdint>
#include "FNiagaraVariable.hpp"
#pragma pack(push, 1)
struct FNiagaraCompilerTag {
    FNiagaraVariable Variable; // 0x0
    FString StringValue; // 0x20
}; // Size: 0x30
#pragma pack(pop)
