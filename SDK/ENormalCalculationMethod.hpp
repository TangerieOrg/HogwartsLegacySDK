#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENormalCalculationMethod : uint8_t {
    AreaWeighted = 0,
    AngleWeighted = 1,
    AreaAngleWeighting = 2,
    ENormalCalculationMethod_MAX = 3,
};
#pragma pack(pop)
