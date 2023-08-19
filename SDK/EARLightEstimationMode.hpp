#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARLightEstimationMode : uint8_t {
    None = 0,
    AmbientLightEstimate = 1,
    DirectionalLightEstimate = 2,
    EARLightEstimationMode_MAX = 3,
};
#pragma pack(pop)
