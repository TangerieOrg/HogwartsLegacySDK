#pragma once
#include <cstdint>
#include "FWeatherSequenceOrigin.hpp"
#pragma pack(push, 1)
struct FWeatherSequenceQueueRequest {
    char pad_0[0x28];
    FWeatherSequenceOrigin Origin; // 0x28
}; // Size: 0x48
#pragma pack(pop)
