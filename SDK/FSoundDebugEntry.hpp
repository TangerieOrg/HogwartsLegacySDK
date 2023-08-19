#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FSoundDebugEntry {
    FName DebugName; // 0x0
    FSoftObjectPath Sound; // 0x8
}; // Size: 0x20
#pragma pack(pop)
