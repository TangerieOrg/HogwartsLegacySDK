#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkyLightSourceMode : uint8_t {
    CapturedScene = 0,
    SpecifiedCubemap = 1,
    RuntimeCapture = 2,
    RuntimeRender = 3,
    SkyAtmosphereCapturedScene = 4,
    ESkyLightSourceMode_MAX = 5,
};
#pragma pack(pop)
