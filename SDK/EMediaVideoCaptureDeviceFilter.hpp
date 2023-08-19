#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMediaVideoCaptureDeviceFilter {
    None = 0,
    Card = 1,
    Software = 2,
    Unknown = 4,
    Webcam = 8,
    EMediaVideoCaptureDeviceFilter_MAX = 9,
};
#pragma pack(pop)
