#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESurfaceFogType : uint8_t {
    None = 0,
    Mist = 1,
    Fog = 2,
    Storm = 3,
    ESurfaceFogType_MAX = 4,
};
#pragma pack(pop)
