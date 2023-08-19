#pragma once
#include <cstdint>
#include "FNiagaraParameterDataSetBinding.hpp"
#pragma pack(push, 1)
struct FNiagaraParameterDataSetBindingCollection {
    TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
    TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
}; // Size: 0x20
#pragma pack(pop)
