#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraHelpersMultiSpawnRateType : uint8_t {
    DoNotCompute = 0,
    BoxVolume = 1,
    SphereVolume = 2,
    BoxSurfaceArea = 3,
    SphereSurfaceArea = 4,
    CircleSurfaceArea = 5,
    ForceToOne = 6,
    ENiagaraHelpersMultiSpawnRateType_MAX = 7,
};
#pragma pack(pop)
