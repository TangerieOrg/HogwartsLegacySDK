#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVolumeCenterlineMode : uint8_t {
    None = 0,
    XAxis = 1,
    YAxis = 2,
    ZAxis = 3,
    EVolumeCenterlineMode_MAX = 4,
};
#pragma pack(pop)
