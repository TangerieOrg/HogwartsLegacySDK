#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAirAbsorptionMethod : uint8_t {
    Linear = 0,
    CustomCurve = 1,
    EAirAbsorptionMethod_MAX = 2,
};
#pragma pack(pop)
