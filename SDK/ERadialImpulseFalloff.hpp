#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERadialImpulseFalloff : uint8_t {
    RIF_Constant = 0,
    RIF_Linear = 1,
    RIF_MAX = 2,
};
#pragma pack(pop)
