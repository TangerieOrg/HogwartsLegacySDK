#pragma once
#include <cstdint>
#include "FSQLitePrimaryKey.hpp"
#include "FSQLiteTableField.hpp"
#pragma pack(push, 1)
struct FSQLiteTable {
    FString DatabaseName; // 0x0
    FString TableName; // 0x10
    TArray<FSQLiteTableField> Fields; // 0x20
    FSQLitePrimaryKey PK; // 0x30
    bool Created; // 0x40
    char pad_41[0x7];
}; // Size: 0x48
#pragma pack(pop)
