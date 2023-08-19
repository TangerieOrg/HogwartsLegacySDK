#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFSR2DeDitherMode : int32_t {
    Off = 0,
    Full = 1,
    HairOnly = 2,
    EFSR2DeDitherMode_MAX = 3,
};
#pragma pack(pop)
