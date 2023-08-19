#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EVectorNoiseFunction : uint8_t {
    VNF_CellnoiseALU = 0,
    VNF_VectorALU = 1,
    VNF_GradientALU = 2,
    VNF_CurlALU = 3,
    VNF_VoronoiALU = 4,
    VNF_MAX = 5,
};
#pragma pack(pop)
