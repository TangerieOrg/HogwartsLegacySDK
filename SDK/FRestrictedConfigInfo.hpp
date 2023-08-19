#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRestrictedConfigInfo {
    FString RestrictedConfigName; // 0x0
    TArray<FString> Owners; // 0x10
}; // Size: 0x20
#pragma pack(pop)
