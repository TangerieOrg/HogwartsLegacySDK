#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FPokeNiagaraFXParameter.hpp"
#pragma pack(push, 1)
struct FPokeNiagaraFXColor : public FPokeNiagaraFXParameter {
    FLinearColor Color; // 0x10
}; // Size: 0x20
#pragma pack(pop)
