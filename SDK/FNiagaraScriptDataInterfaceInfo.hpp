#pragma once
#include <cstdint>
#include "FNiagaraTypeDefinition.hpp"
class UNiagaraDataInterface;
#pragma pack(push, 1)
struct FNiagaraScriptDataInterfaceInfo {
    UNiagaraDataInterface* DataInterface; // 0x0
    FName Name; // 0x8
    int32_t UserPtrIdx; // 0x10
    char pad_14[0x4];
    FNiagaraTypeDefinition Type; // 0x18
    FName RegisteredParameterMapRead; // 0x28
    FName RegisteredParameterMapWrite; // 0x30
}; // Size: 0x38
#pragma pack(pop)
