#pragma once
#include <cstdint>
#include "EStereoChannelMode.hpp"
#pragma pack(push, 1)
struct FSourceEffectMidSideSpreaderSettings {
    float SpreadAmount; // 0x0
    EStereoChannelMode InputMode; // 0x4
    EStereoChannelMode OutputMode; // 0x5
    bool bEqualPower; // 0x6
    char pad_7[0x1];
}; // Size: 0x8
#pragma pack(pop)
