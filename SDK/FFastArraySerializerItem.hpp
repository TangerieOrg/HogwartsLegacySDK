#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFastArraySerializerItem {
    int32_t ReplicationID; // 0x0
    int32_t ReplicationKey; // 0x4
    int32_t MostRecentArrayReplicationKey; // 0x8
}; // Size: 0xc
#pragma pack(pop)
