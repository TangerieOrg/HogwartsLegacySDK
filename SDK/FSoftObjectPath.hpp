#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSoftObjectPath {
    FName AssetPathName; // 0x0
    FString SubPathString; // 0x8
}; // Size: 0x18
#pragma pack(pop)
