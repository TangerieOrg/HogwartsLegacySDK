#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMulticastRecordOptions {
    FString FuncPathName; // 0x0
    bool bServerSkip; // 0x10
    bool bClientSkip; // 0x11
    char pad_12[0x6];
}; // Size: 0x18
#pragma pack(pop)
