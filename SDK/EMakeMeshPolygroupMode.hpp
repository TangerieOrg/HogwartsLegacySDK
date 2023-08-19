#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMakeMeshPolygroupMode : uint8_t {
    Single = 0,
    PerFace = 1,
    PerQuad = 2,
    EMakeMeshPolygroupMode_MAX = 3,
};
#pragma pack(pop)
