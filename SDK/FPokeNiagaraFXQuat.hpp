#pragma once
#include <cstdint>
#include "FPokeNiagaraFXParameter.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FPokeNiagaraFXQuat : public FPokeNiagaraFXParameter {
    FRotator Rotator; // 0x10
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
