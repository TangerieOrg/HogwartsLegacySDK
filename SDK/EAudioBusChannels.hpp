#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAudioBusChannels : uint8_t {
    Mono = 0,
    Stereo = 1,
    EAudioBusChannels_MAX = 2,
};
#pragma pack(pop)
