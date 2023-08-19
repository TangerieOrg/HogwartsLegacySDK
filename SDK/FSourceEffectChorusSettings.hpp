#pragma once
#include <cstdint>
#include "FSoundModulationDestinationSettings.hpp"
#pragma pack(push, 1)
struct FSourceEffectChorusSettings {
    float Depth; // 0x0
    float Frequency; // 0x4
    float Feedback; // 0x8
    float WetLevel; // 0xc
    float DryLevel; // 0x10
    float Spread; // 0x14
    FSoundModulationDestinationSettings DepthModulation; // 0x18
    FSoundModulationDestinationSettings FrequencyModulation; // 0x28
    FSoundModulationDestinationSettings FeedbackModulation; // 0x38
    FSoundModulationDestinationSettings WetModulation; // 0x48
    FSoundModulationDestinationSettings DryModulation; // 0x58
    FSoundModulationDestinationSettings SpreadModulation; // 0x68
}; // Size: 0x78
#pragma pack(pop)
