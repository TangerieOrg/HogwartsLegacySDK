#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESmoothMeshToolSmoothType : uint8_t {
    Iterative = 0,
    Implicit = 1,
    Diffusion = 2,
    ESmoothMeshToolSmoothType_MAX = 3,
};
#pragma pack(pop)
