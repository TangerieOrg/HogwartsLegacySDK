#pragma once
#include <cstdint>
#include "EAudioBusChannels.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAudioBus : public UObject {
public:
    EAudioBusChannels AudioBusChannels; // 0x28
    char pad_29[0x7];
    static UAudioBus* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
