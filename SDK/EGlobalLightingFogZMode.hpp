#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGlobalLightingFogZMode : uint8_t {
    BaseOfVolume = 0,
    CenterOfVolume = 1,
    CameraZ = 2,
    PlayerZ = 3,
    WorldBase = 4,
    OffsetOnly = 5,
    OffsetIsAbsolute = 6,
    EGlobalLightingFogZMode_MAX = 7,
};
#pragma pack(pop)
