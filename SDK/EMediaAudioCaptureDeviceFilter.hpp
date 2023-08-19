#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMediaAudioCaptureDeviceFilter {
    None = 0,
    Card = 1,
    Microphone = 2,
    Software = 4,
    Unknown = 8,
    EMediaAudioCaptureDeviceFilter_MAX = 9,
};
#pragma pack(pop)
