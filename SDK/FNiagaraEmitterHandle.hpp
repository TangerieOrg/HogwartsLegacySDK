#pragma once
#include <cstdint>
#include "FGuid.hpp"
class UNiagaraEmitter;
#pragma pack(push, 1)
struct FNiagaraEmitterHandle {
    FGuid ID; // 0x0
    FName IdName; // 0x10
    bool bIsEnabled; // 0x18
    char pad_19[0x3];
    FName Name; // 0x1c
    char pad_24[0x4];
    UNiagaraEmitter* Instance; // 0x28
}; // Size: 0x30
#pragma pack(pop)
