#pragma once
#include <cstdint>
#include "EAkChannelConfigType.hpp"
#include "EAkPanningRule.hpp"
#pragma pack(push, 1)
struct FAkMainOutputSettings {
    FString AudioDeviceShareset; // 0x0
    uint32_t DeviceID; // 0x10
    EAkPanningRule PanningRule; // 0x14
    EAkChannelConfigType ChannelConfigType; // 0x18
    uint32_t ChannelMask; // 0x1c
    uint32_t NumberOfChannels; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
