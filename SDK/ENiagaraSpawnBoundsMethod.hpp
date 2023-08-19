#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraSpawnBoundsMethod : uint8_t {
    Disabled = 0,
    Radius = 1,
    MajorAxisLength = 2,
    ProjectedBoxSurfaceArea = 3,
    ProjectedCircleSurfaceArea = 4,
    BoxVolume = 5,
    SphereVolume = 6,
    BoxSurfaceArea = 7,
    SphereSurfaceArea = 8,
    ENiagaraSpawnBoundsMethod_MAX = 9,
};
#pragma pack(pop)
