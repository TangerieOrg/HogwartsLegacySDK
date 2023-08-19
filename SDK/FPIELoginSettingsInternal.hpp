#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPIELoginSettingsInternal {
    FString ID; // 0x0
    FString Token; // 0x10
    FString Type; // 0x20
    TArray<uint8_t> TokenBytes; // 0x30
}; // Size: 0x40
#pragma pack(pop)
