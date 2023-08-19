#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOdcNavmeshProbeType {
    Full3D = 0,
    Projection = 1,
    Horizontal = 2,
    EOdcNavmeshProbeType_MAX = 3,
};
#pragma pack(pop)
