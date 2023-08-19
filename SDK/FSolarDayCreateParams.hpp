#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSolarDayCreateParams {
    int32_t Samples; // 0x0
    float ErrorThreshold; // 0x4
}; // Size: 0x8
#pragma pack(pop)
