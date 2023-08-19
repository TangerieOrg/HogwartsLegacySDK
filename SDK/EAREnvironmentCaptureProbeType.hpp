#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAREnvironmentCaptureProbeType : uint8_t {
    None = 0,
    Manual = 1,
    Automatic = 2,
    EAREnvironmentCaptureProbeType_MAX = 3,
};
#pragma pack(pop)
