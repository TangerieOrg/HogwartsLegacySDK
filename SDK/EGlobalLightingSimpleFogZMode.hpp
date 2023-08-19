#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGlobalLightingSimpleFogZMode : uint8_t {
    OffsetOnly = 0,
    OffsetIsAbsolute = 1,
    CameraZ = 2,
    PlayerZ = 3,
    SceneRigTransform = 4,
    WorldBase = 5,
    EGlobalLightingSimpleFogZMode_MAX = 6,
};
#pragma pack(pop)
