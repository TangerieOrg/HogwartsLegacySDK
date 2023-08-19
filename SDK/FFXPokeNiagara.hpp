#pragma once
#include <cstdint>
#include "FFXPoke.hpp"
#include "FPokeNiagaraFXBool.hpp"
#include "FPokeNiagaraFXColor.hpp"
#include "FPokeNiagaraFXFloat.hpp"
#include "FPokeNiagaraFXInt.hpp"
#include "FPokeNiagaraFXQuat.hpp"
#include "FPokeNiagaraFXVector.hpp"
#include "FPokeNiagaraFXVector4.hpp"
#pragma pack(push, 1)
struct FFXPokeNiagara : public FFXPoke {
    TArray<FPokeNiagaraFXFloat> Floats; // 0x8
    TArray<FPokeNiagaraFXColor> Colors; // 0x18
    TArray<FPokeNiagaraFXVector> Vectors; // 0x28
    TArray<FPokeNiagaraFXVector4> Vector4s; // 0x38
    TArray<FPokeNiagaraFXQuat> Quats; // 0x48
    TArray<FPokeNiagaraFXInt> Ints; // 0x58
    TArray<FPokeNiagaraFXBool> Bools; // 0x68
}; // Size: 0x78
#pragma pack(pop)
