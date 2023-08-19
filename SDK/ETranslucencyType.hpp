#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETranslucencyType : uint8_t {
    Raster = 0,
    RayTracing = 1,
    ETranslucencyType_MAX = 2,
};
#pragma pack(pop)
