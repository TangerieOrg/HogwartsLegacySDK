#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESetMeshMaterialMode : uint8_t {
    KeepOriginal = 0,
    Checkerboard = 1,
    Override = 2,
    ESetMeshMaterialMode_MAX = 3,
};
#pragma pack(pop)
