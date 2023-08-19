#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDrawPolygonOutputMode : uint8_t {
    MeshedPolygon = 0,
    ExtrudedConstant = 1,
    ExtrudedInteractive = 2,
    EDrawPolygonOutputMode_MAX = 3,
};
#pragma pack(pop)
