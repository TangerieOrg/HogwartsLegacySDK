#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMediaWebcamCaptureDeviceFilter {
    None = 0,
    DepthSensor = 1,
    Front = 2,
    Rear = 4,
    Unknown = 8,
    EMediaWebcamCaptureDeviceFilter_MAX = 9,
};
#pragma pack(pop)
