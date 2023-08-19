#pragma once
#include <cstdint>
#include "ENPC_AbilityChannel.hpp"
#pragma pack(push, 1)
struct FNPC_AbilityChannelMap {
    FName Name; // 0x0
    ENPC_AbilityChannel Channel; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
