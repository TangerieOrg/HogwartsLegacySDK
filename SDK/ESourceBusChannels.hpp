#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESourceBusChannels : uint8_t {
    Mono = 0,
    Stereo = 1,
    ESourceBusChannels_MAX = 2,
};
#pragma pack(pop)
