#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRCPresetFieldsRemovedEvent {
    FString Type; // 0x0
    FName PresetName; // 0x10
    FString PresetId; // 0x18
    TArray<FName> RemovedFields; // 0x28
    TArray<FString> RemovedFieldIds; // 0x38
}; // Size: 0x48
#pragma pack(pop)
