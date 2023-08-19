#pragma once
#include <cstdint>
#include "FPokeNiagaraFXParameter.hpp"
#pragma pack(push, 1)
struct FPokeNiagaraFXFloat : public FPokeNiagaraFXParameter {
    float Value; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
