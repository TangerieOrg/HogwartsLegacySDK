#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_StairsSlopeContext : uint8_t {
    None = 0,
    GoingUp = 1,
    GoingDown = 2,
    ENPC_MAX = 3,
};
#pragma pack(pop)
