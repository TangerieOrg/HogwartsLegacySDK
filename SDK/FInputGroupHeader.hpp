#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FInputGroupHeader {
    FName HeaderID; // 0x0
    TArray<FName> GroupNames; // 0x8
}; // Size: 0x18
#pragma pack(pop)
