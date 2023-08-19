#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARPlaneOrientation : uint8_t {
    Horizontal = 0,
    Vertical = 1,
    Diagonal = 2,
    EARPlaneOrientation_MAX = 3,
};
#pragma pack(pop)
