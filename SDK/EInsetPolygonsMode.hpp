#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInsetPolygonsMode : uint8_t {
    All = 0,
    CenterPolygonOnly = 1,
    SidePolygonsOnly = 2,
    EInsetPolygonsMode_MAX = 3,
};
#pragma pack(pop)
