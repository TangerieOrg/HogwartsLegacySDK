#pragma once
#include <cstdint>
#include "ECollisionResponse.hpp"
#pragma pack(push, 1)
struct FResponseChannel {
    FName Channel; // 0x0
    ECollisionResponse Response; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
