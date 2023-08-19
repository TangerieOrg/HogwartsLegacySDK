#pragma once
#include <cstdint>
#include "FSoundModulationDestinationSettings.hpp"
#pragma pack(push, 1)
struct FSourceEffectBitCrusherSettings {
    float CrushedSampleRate; // 0x0
    char pad_4[0x4];
    FSoundModulationDestinationSettings SampleRateModulation; // 0x8
    float CrushedBits; // 0x18
    char pad_1c[0x4];
    FSoundModulationDestinationSettings BitModulation; // 0x20
}; // Size: 0x30
#pragma pack(pop)
