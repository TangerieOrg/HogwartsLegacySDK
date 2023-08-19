#pragma once
#include <cstdint>
class UObject;
#pragma pack(push, 1)
struct FNiagaraSystemCompileRequest {
    char pad_0[0x8];
    TArray<UObject*> RootObjects; // 0x8
    char pad_18[0x68];
}; // Size: 0x80
#pragma pack(pop)
