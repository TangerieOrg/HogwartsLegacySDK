#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESfxOcclusion : uint8_t {
    NoOcclusion_0 = 0,
    Single_1 = 1,
    HulaHoop_8 = 2,
    FacingPortal_16 = 3,
    EdgeOnPortal_24 = 4,
    ESfxOcclusion_MAX = 5,
};
#pragma pack(pop)
