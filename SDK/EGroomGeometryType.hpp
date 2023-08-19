#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroomGeometryType : uint8_t {
    Strands = 0,
    Cards = 1,
    Meshes = 2,
    EGroomGeometryType_MAX = 3,
};
#pragma pack(pop)
