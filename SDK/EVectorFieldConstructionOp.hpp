#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EVectorFieldConstructionOp : uint8_t {
    VFCO_Extrude = 0,
    VFCO_Revolve = 1,
    VFCO_MAX = 2,
};
#pragma pack(pop)
