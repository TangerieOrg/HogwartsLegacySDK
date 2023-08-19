#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECoverageShapeType : uint8_t {
    SPHERE = 0,
    BOX = 1,
    ECoverageShapeType_MAX = 2,
};
#pragma pack(pop)
