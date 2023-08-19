#pragma once
#include <cstdint>
#include "FNiagaraHelpersInitializerRawBool.hpp"
#include "FNiagaraHelpersInitializerRawFloat.hpp"
#include "FNiagaraHelpersInitializerRawInteger.hpp"
#include "FNiagaraHelpersInitializerRawLinearColor.hpp"
#include "FNiagaraHelpersInitializerRawMaterial.hpp"
#include "FNiagaraHelpersInitializerRawRotator.hpp"
#include "FNiagaraHelpersInitializerRawVector.hpp"
#pragma pack(push, 1)
struct FNiagaraHelpersInitializerRaw {
    TArray<FNiagaraHelpersInitializerRawFloat> Floats; // 0x0
    TArray<FNiagaraHelpersInitializerRawBool> Bools; // 0x10
    TArray<FNiagaraHelpersInitializerRawInteger> Integers; // 0x20
    TArray<FNiagaraHelpersInitializerRawLinearColor> LinearColors; // 0x30
    TArray<FNiagaraHelpersInitializerRawVector> Vectors; // 0x40
    TArray<FNiagaraHelpersInitializerRawRotator> Rotators; // 0x50
    TArray<FNiagaraHelpersInitializerRawMaterial> Materials; // 0x60
}; // Size: 0x70
#pragma pack(pop)
