#pragma once
#include <cstdint>
namespace EXRDeviceConnectionResult {
#pragma pack(push, 1)
enum Type : uint8_t {
    NoTrackingSystem = 0,
    FeatureNotSupported = 1,
    NoValidViewport = 2,
    MiscFailure = 3,
    Success = 4,
    EXRDeviceConnectionResult_MAX = 5,
};
#pragma pack(pop)
}
