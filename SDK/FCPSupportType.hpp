#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class FCPSupportType : int32_t {
    Ignore = 0,
    None = 1,
    Stairs = 2,
    Slope = 3,
    FCPSupportType_MAX = 4,
};
#pragma pack(pop)
