#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum CylinderHeightAxis : uint8_t {
    PMLPC_HEIGHTAXIS_X = 0,
    PMLPC_HEIGHTAXIS_Y = 1,
    PMLPC_HEIGHTAXIS_Z = 2,
    PMLPC_HEIGHTAXIS_MAX = 3,
};
#pragma pack(pop)
