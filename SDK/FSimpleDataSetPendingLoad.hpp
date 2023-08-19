#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FSimpleDataSetPendingLoad {
    FSoftObjectPath UniqueId; // 0x0
    FDateTime Started; // 0x18
    char pad_20[0x10];
}; // Size: 0x30
#pragma pack(pop)
