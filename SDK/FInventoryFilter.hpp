#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FInventoryFilter {
    FString Value; // 0x0
    FString ColumnName; // 0x10
    FString TableName; // 0x20
}; // Size: 0x30
#pragma pack(pop)
