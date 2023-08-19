#pragma once
#include <cstdint>
#include "FPokeNiagaraFXParameter.hpp"
#pragma pack(push, 1)
struct FPokeNiagaraFXBool : public FPokeNiagaraFXParameter {
    bool bValue; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
