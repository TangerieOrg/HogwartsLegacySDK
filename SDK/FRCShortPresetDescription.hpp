#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRCShortPresetDescription {
    FName Name; // 0x0
    FString ID; // 0x8
    FName Path; // 0x18
}; // Size: 0x20
#pragma pack(pop)
