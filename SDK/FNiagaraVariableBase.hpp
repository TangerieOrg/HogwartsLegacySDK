#pragma once
#include <cstdint>
#include "FNiagaraTypeDefinitionHandle.hpp"
#pragma pack(push, 1)
struct FNiagaraVariableBase {
    FName Name; // 0x0
    FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8
}; // Size: 0xc
#pragma pack(pop)
