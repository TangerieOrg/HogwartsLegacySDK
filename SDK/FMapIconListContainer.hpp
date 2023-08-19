#pragma once
#include <cstdint>
#include "FMapIconEntry.hpp"
#pragma pack(push, 1)
struct FMapIconListContainer {
    TArray<FMapIconEntry> IconList; // 0x0
}; // Size: 0x10
#pragma pack(pop)
