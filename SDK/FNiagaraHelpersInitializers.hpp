#pragma once
#include <cstdint>
#include "FNiagaraHelpersInitializerBool.hpp"
#include "FNiagaraHelpersInitializerFloat.hpp"
#include "FNiagaraHelpersInitializerInteger.hpp"
#include "FNiagaraHelpersInitializerLinearColor.hpp"
#include "FNiagaraHelpersInitializerMaterial.hpp"
#include "FNiagaraHelpersInitializerRotator.hpp"
#include "FNiagaraHelpersInitializerVector.hpp"
#pragma pack(push, 1)
struct FNiagaraHelpersInitializers {
    TArray<FNiagaraHelpersInitializerFloat> Floats; // 0x0
    TArray<FNiagaraHelpersInitializerBool> Bools; // 0x10
    TArray<FNiagaraHelpersInitializerInteger> Integers; // 0x20
    TArray<FNiagaraHelpersInitializerLinearColor> LinearColors; // 0x30
    TArray<FNiagaraHelpersInitializerVector> Vectors; // 0x40
    TArray<FNiagaraHelpersInitializerRotator> Rotators; // 0x50
    TArray<FNiagaraHelpersInitializerMaterial> Materials; // 0x60
}; // Size: 0x70
#pragma pack(pop)
