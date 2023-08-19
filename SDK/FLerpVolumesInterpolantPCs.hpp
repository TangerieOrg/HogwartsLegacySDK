#pragma once
#include <cstdint>
#include "FLerpVolumesInterpolantBase.hpp"
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
#pragma pack(push, 1)
struct FLerpVolumesInterpolantPCs : public FLerpVolumesInterpolantBase {
    UMaterialParameterCollection* MaterialParameterCollection; // 0x10
    UNiagaraParameterCollection* NiagaraParameterCollection; // 0x18
}; // Size: 0x20
#pragma pack(pop)
