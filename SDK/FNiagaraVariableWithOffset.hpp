#pragma once
#include <cstdint>
#include "FNiagaraVariableBase.hpp"
#pragma pack(push, 1)
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase {
    int32_t Offset; // 0xc
}; // Size: 0x10
#pragma pack(pop)
