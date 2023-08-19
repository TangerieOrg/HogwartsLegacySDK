#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETriangleTessellationMode : uint8_t {
    ThreeTriangles = 0,
    FourTriangles = 1,
    ETriangleTessellationMode_MAX = 2,
};
#pragma pack(pop)
