#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAutoCompleteCommand {
    FString Command; // 0x0
    FString Desc; // 0x10
    char pad_20[0x8];
}; // Size: 0x28
#pragma pack(pop)
