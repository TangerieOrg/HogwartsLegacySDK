#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#pragma pack(push, 1)
struct FStreamingPlaceholderLockState {
    FDbSingleColumnInfo Lock; // 0x0
    char pad_88[0x28];
}; // Size: 0xb0
#pragma pack(pop)
