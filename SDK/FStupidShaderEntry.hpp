#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStupidShaderEntry {
    FName Source; // 0x0
    FName Platform; // 0x8
    FName Output; // 0x10
    FString Type; // 0x18
    FString Permutation; // 0x28
    FName Group; // 0x38
    FName SpecialType; // 0x40
    FName OutputHash; // 0x48
    char pad_50[0x50];
    FName NiagaraContainer; // 0xa0
    bool bResolveNiagaraSource; // 0xa8
    char pad_a9[0x7];
}; // Size: 0xb0
#pragma pack(pop)
