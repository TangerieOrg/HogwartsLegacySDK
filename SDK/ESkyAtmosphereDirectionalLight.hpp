#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkyAtmosphereDirectionalLight : uint8_t {
    None = 0,
    Sun = 1,
    Moon = 2,
    Auto = 3,
    ESkyAtmosphereDirectionalLight_MAX = 4,
};
#pragma pack(pop)
