#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EShadowMapFlags : uint8_t {
    SMF_None = 0,
    SMF_Streamed = 1,
    SMF_MAX = 2,
};
#pragma pack(pop)
