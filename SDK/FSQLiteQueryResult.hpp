#pragma once
#include <cstdint>
#include "FSQLiteQueryResultRow.hpp"
#pragma pack(push, 1)
struct FSQLiteQueryResult {
    TArray<FSQLiteQueryResultRow> ResultRows; // 0x0
    bool Success; // 0x10
    char pad_11[0x7];
    FString ErrorMessage; // 0x18
}; // Size: 0x28
#pragma pack(pop)
