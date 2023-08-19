#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EReflectedAndRefractedRayTracedShadows : uint8_t {
    Disabled = 0,
    Hard_shadows = 1,
    Area_shadows = 2,
    EReflectedAndRefractedRayTracedShadows_MAX = 3,
};
#pragma pack(pop)
