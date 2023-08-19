#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraDebugHUDVariable {
    bool bEnabled; // 0x0
    char pad_1[0x7];
    FString Name; // 0x8
}; // Size: 0x18
#pragma pack(pop)
