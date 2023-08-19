#pragma once
#include <cstdint>
#include "EFastArraySerializerDeltaFlags.hpp"
#pragma pack(push, 1)
struct FFastArraySerializer {
    char pad_0[0x54];
    int32_t ArrayReplicationKey; // 0x54
    char pad_58[0xa8];
    EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
    char pad_101[0x7];
}; // Size: 0x108
#pragma pack(pop)
