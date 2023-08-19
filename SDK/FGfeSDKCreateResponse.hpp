#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGfeSDKCreateResponse {
    uint16_t VersionMajor; // 0x0
    uint16_t VersionMinor; // 0x2
    char pad_4[0x4];
    FString NVIDIAGfeVersion; // 0x8
    char pad_18[0x50];
}; // Size: 0x68
#pragma pack(pop)
