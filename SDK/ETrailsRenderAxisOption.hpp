#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETrailsRenderAxisOption : uint8_t {
    Trails_CameraUp = 0,
    Trails_SourceUp = 1,
    Trails_WorldUp = 2,
    Trails_MAX = 3,
};
#pragma pack(pop)
