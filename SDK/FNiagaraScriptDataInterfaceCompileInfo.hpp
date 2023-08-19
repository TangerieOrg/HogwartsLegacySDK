#pragma once
#include <cstdint>
#include "FNiagaraTypeDefinition.hpp"
#pragma pack(push, 1)
struct FNiagaraScriptDataInterfaceCompileInfo {
    FName Name; // 0x0
    int32_t UserPtrIdx; // 0x8
    char pad_c[0x4];
    FNiagaraTypeDefinition Type; // 0x10
    FName RegisteredParameterMapRead; // 0x20
    FName RegisteredParameterMapWrite; // 0x28
    bool bIsPlaceholder; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
