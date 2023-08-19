#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraCompileHashVisitorDebugInfo {
    FString Object; // 0x0
    TArray<FString> PropertyKeys; // 0x10
    TArray<FString> PropertyValues; // 0x20
}; // Size: 0x30
#pragma pack(pop)
