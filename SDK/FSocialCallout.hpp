#pragma once
#include <cstdint>
#include "FSocialCapitalMovement.hpp"
#include "FSocialDebug.hpp"
#pragma pack(push, 1)
struct FSocialCallout {
    bool IsFresh; // 0x0
    char pad_1[0x7];
    FSocialDebug SocialDebug; // 0x8
    FSocialCapitalMovement SocialCapitalMovement; // 0x18
}; // Size: 0x30
#pragma pack(pop)
