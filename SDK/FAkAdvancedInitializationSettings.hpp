#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAkAdvancedInitializationSettings {
    uint32_t IO_MemorySize; // 0x0
    uint32_t IO_Granularity; // 0x4
    float TargetAutoStreamBufferLength; // 0x8
    bool UseStreamCache; // 0xc
    char pad_d[0x3];
    uint32_t MaximumPinnedBytesInCache; // 0x10
    bool EnableGameSyncPreparation; // 0x14
    char pad_15[0x3];
    uint32_t ContinuousPlaybackLookAhead; // 0x18
    uint32_t MonitorQueuePoolSize; // 0x1c
    uint32_t MaximumHardwareTimeoutMs; // 0x20
    bool DebugOutOfRangeCheckEnabled; // 0x24
    char pad_25[0x3];
    float DebugOutOfRangeLimit; // 0x28
}; // Size: 0x2c
#pragma pack(pop)
