#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELumosContactShadows : uint8_t {
    None = 0,
    WorldSpace = 1,
    DepthUnits = 2,
    ELumosContactShadows_MAX = 3,
};
#pragma pack(pop)
