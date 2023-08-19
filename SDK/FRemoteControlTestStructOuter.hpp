#pragma once
#include <cstdint>
#include "FRemoteControlTestStructInner.hpp"
#pragma pack(push, 1)
struct FRemoteControlTestStructOuter {
    int8_t Int8Value; // 0x0
    char pad_1[0x57];
    int32_t Int32Value; // 0x58
    FRemoteControlTestStructInner RemoteControlTestStructInner; // 0x5c
}; // Size: 0x78
#pragma pack(pop)
