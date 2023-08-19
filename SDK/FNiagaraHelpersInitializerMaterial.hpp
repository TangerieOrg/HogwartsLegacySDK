#pragma once
#include <cstdint>
#include "FNiagaraHelpersVarNameMaterial.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FNiagaraHelpersInitializerMaterial {
    FNiagaraHelpersVarNameMaterial Variable; // 0x0
    UMaterialInterface* Value; // 0x8
}; // Size: 0x10
#pragma pack(pop)
