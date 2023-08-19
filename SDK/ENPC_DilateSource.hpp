#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_DilateSource : uint8_t {
    None = 0,
    Recovery = 1,
    Param = 2,
    Time = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
