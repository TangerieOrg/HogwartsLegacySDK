#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRCAssetDescription {
    FName Name; // 0x0
    FName Class; // 0x8
    FName Path; // 0x10
    char pad_18[0x50];
}; // Size: 0x68
#pragma pack(pop)
