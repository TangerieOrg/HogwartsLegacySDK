#pragma once
#include <cstdint>
#include "FVector.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
struct FMapFXItem {
    UNiagaraSystem* NiagaraSystem; // 0x0
    FString Path; // 0x8
    FString Name; // 0x18
    bool Looped; // 0x28
    char pad_29[0x3];
    FVector Scale; // 0x2c
    char pad_38[0x8];
}; // Size: 0x40
#pragma pack(pop)
