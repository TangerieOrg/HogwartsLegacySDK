#pragma once
#include <cstdint>
#include "FNiagaraUserParameterBinding.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FNiagaraMeshMaterialOverride {
    UMaterialInterface* ExplicitMat; // 0x0
    FNiagaraUserParameterBinding UserParamBinding; // 0x8
}; // Size: 0x28
#pragma pack(pop)
