#pragma once
#include <cstdint>
#include "FRemoteControlTestStructInnerSimle.hpp"
#pragma pack(push, 1)
struct FRemoteControlTestStructInner {
    int8_t Int8Value; // 0x0
    char pad_1[0x3];
    FRemoteControlTestStructInnerSimle InnerSimle; // 0x4
    int32_t Int32Value; // 0x8
    char pad_c[0x10];
}; // Size: 0x1c
#pragma pack(pop)
