#pragma once
#include <cstdint>
#include "FNiagaraDataSetCompiledData.hpp"
#pragma pack(push, 1)
struct FNiagaraEventGeneratorProperties {
    int32_t MaxEventsPerFrame; // 0x0
    FName ID; // 0x4
    char pad_c[0x4];
    FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
}; // Size: 0x50
#pragma pack(pop)
