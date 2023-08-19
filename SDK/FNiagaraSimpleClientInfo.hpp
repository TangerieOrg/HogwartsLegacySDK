#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraSimpleClientInfo {
    TArray<FString> Systems; // 0x0
    TArray<FString> Actors; // 0x10
    TArray<FString> Components; // 0x20
    TArray<FString> Emitters; // 0x30
}; // Size: 0x40
#pragma pack(pop)
