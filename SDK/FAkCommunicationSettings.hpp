#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAkCommunicationSettings {
    uint32_t PoolSize; // 0x0
    uint16_t DiscoveryBroadcastPort; // 0x4
    uint16_t CommandPort; // 0x6
    uint16_t NotificationPort; // 0x8
    char pad_a[0x6];
    FString NetworkName; // 0x10
}; // Size: 0x20
#pragma pack(pop)
