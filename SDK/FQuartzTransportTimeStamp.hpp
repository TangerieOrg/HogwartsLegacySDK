#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FQuartzTransportTimeStamp {
    int32_t Bars; // 0x0
    int32_t Beat; // 0x4
    float BeatFraction; // 0x8
    float Seconds; // 0xc
}; // Size: 0x10
#pragma pack(pop)
