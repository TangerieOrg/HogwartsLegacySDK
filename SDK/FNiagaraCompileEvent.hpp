#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FNiagaraCompileEventSeverity.hpp"
#pragma pack(push, 1)
struct FNiagaraCompileEvent {
    FNiagaraCompileEventSeverity Severity; // 0x0
    char pad_1[0x7];
    FString Message; // 0x8
    FString ShortDescription; // 0x18
    bool bDismissable; // 0x28
    char pad_29[0x3];
    FGuid NodeGuid; // 0x2c
    FGuid PinGuid; // 0x3c
    char pad_4c[0x4];
    TArray<FGuid> StackGuids; // 0x50
}; // Size: 0x60
#pragma pack(pop)
