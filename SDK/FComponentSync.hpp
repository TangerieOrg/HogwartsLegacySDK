#pragma once
#include <cstdint>
#include "ESyncOption.hpp"
#pragma pack(push, 1)
struct FComponentSync {
    FName Name; // 0x0
    ESyncOption SyncOption; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
