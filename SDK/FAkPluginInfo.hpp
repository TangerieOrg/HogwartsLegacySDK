#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAkPluginInfo {
    FString Name; // 0x0
    uint32_t PluginID; // 0x10
    char pad_14[0x4];
    FString dll; // 0x18
}; // Size: 0x28
#pragma pack(pop)
