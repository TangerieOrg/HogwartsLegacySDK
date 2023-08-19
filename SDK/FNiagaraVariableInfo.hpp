#pragma once
#include <cstdint>
#include "FNiagaraVariable.hpp"
class UNiagaraDataInterface;
#pragma pack(push, 1)
struct FNiagaraVariableInfo {
    FNiagaraVariable Variable; // 0x0
    char pad_20[0x18];
    UNiagaraDataInterface* DataInterface; // 0x38
}; // Size: 0x40
#pragma pack(pop)
