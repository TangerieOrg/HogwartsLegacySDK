#pragma once
#include <cstdint>
#include "ESourceBusChannels.hpp"
#include "USoundWave.hpp"
class UAudioBus;
#pragma pack(push, 1)
class USoundSourceBus : public USoundWave {
public:
    ESourceBusChannels SourceBusChannels; // 0x370
    char pad_371[0x3];
    float SourceBusDuration; // 0x374
    UAudioBus* AudioBus; // 0x378
    uint8_t bAutoDeactivateWhenSilent : 1; // 0x380
    uint8_t pad_bitfield_380_1 : 7;
    char pad_381[0x7];
    static USoundSourceBus* StaticClass();
}; // Size: 0x388
#pragma pack(pop)
