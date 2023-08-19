#pragma once
#include <cstdint>
#include "FSQLiteKeyValuePair.hpp"
#pragma pack(push, 1)
struct FSQLiteQueryResultRow {
    TArray<FSQLiteKeyValuePair> Fields; // 0x0
}; // Size: 0x10
#pragma pack(pop)
