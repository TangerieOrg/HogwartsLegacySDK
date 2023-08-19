#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESkyLightSourceType : uint8_t {
    SLS_CapturedScene = 0,
    SLS_SpecifiedCubemap = 1,
    SLS_MAX = 2,
};
#pragma pack(pop)
