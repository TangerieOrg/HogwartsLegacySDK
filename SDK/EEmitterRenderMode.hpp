#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EEmitterRenderMode : uint8_t {
    ERM_Normal = 0,
    ERM_Point = 1,
    ERM_Cross = 2,
    ERM_LightsOnly = 3,
    ERM_None = 4,
    ERM_MAX = 5,
};
#pragma pack(pop)
