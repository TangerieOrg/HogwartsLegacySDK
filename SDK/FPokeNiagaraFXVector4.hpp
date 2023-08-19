#pragma once
#include <cstdint>
#include "FPokeNiagaraFXParameter.hpp"
#include "FVector4.hpp"
#pragma pack(push, 1)
struct FPokeNiagaraFXVector4 : public FPokeNiagaraFXParameter {
    FVector4 Vector; // 0x10
}; // Size: 0x20
#pragma pack(pop)
