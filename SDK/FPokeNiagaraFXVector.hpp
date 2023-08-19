#pragma once
#include <cstdint>
#include "FPokeNiagaraFXParameter.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FPokeNiagaraFXVector : public FPokeNiagaraFXParameter {
    FVector Vector; // 0x10
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
