#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMasterOverlapThrottlerSettings {
    float NoOverlapEventsRadiusMeters; // 0x0
    char pad_4[0x8];
    bool bManageOverlapsEnabled; // 0xc
    bool bManageCollisionEnabled; // 0xd
    bool bPhysicsCollisionsEnabled; // 0xe
    char pad_f[0x1];
}; // Size: 0x10
#pragma pack(pop)
