#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCompressedTrack {
    TArray<uint8_t> ByteStream; // 0x0
    TArray<float> Times; // 0x10
    float Mins[3]; // 0x20
    float Ranges[3]; // 0x2c
}; // Size: 0x38
#pragma pack(pop)
