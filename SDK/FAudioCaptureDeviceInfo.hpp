#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAudioCaptureDeviceInfo {
    FName DeviceName; // 0x0
    int32_t NumInputChannels; // 0x8
    int32_t SampleRate; // 0xc
}; // Size: 0x10
#pragma pack(pop)
