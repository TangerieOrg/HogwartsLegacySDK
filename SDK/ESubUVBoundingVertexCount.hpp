#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESubUVBoundingVertexCount : uint8_t {
    BVC_FourVertices = 0,
    BVC_EightVertices = 1,
    BVC_MAX = 2,
};
#pragma pack(pop)
