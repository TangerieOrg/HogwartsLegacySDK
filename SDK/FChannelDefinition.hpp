#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FChannelDefinition {
    FName ChannelName; // 0x0
    FName ClassName; // 0x8
    UClass* ChannelClass; // 0x10
    int32_t StaticChannelIndex; // 0x18
    bool bTickOnCreate; // 0x1c
    bool bServerOpen; // 0x1d
    bool bClientOpen; // 0x1e
    bool bInitialServer; // 0x1f
    bool bInitialClient; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
