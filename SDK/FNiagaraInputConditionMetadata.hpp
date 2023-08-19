#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraInputConditionMetadata {
    FName InputName; // 0x0
    TArray<FString> TargetValues; // 0x8
}; // Size: 0x18
#pragma pack(pop)
