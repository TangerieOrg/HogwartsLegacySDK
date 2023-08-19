#pragma once
#include <cstdint>
#include "FPokeNiagaraFXParameter.hpp"
#pragma pack(push, 1)
struct FPokeNiagaraFXInt : public FPokeNiagaraFXParameter {
    int32_t Value; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
