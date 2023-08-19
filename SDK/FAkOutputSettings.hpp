#pragma once
#include <cstdint>
#include "AkChannelConfiguration.hpp"
#include "PanningRule.hpp"
#pragma pack(push, 1)
struct FAkOutputSettings {
    FString AudioDeviceSharesetName; // 0x0
    int32_t IdDevice; // 0x10
    PanningRule PanRule; // 0x14
    AkChannelConfiguration ChannelConfig; // 0x15
    char pad_16[0x2];
}; // Size: 0x18
#pragma pack(pop)
