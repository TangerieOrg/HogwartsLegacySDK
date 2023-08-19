#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLerpVolumesRemapLevelName {
    FString InLevelName; // 0x0
    FString OutLevelName; // 0x10
    bool bExactMatch; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
