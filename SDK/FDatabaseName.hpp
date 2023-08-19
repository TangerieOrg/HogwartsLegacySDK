#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDatabaseName {
    FName DBSubType; // 0x0
    FName DBName; // 0x8
}; // Size: 0x10
#pragma pack(pop)
