#pragma once
#include <cstdint>
#include "FCacheEventBase.hpp"
#pragma pack(push, 1)
struct FEnableStateEvent : public FCacheEventBase {
    int32_t Index; // 0x8
    bool bEnable; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
