#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EXRTrackedDeviceType : uint8_t {
    HeadMountedDisplay = 0,
    Controller = 1,
    TrackingReference = 2,
    Other = 3,
    Invalid = 254,
    Any = 255,
};
#pragma pack(pop)
