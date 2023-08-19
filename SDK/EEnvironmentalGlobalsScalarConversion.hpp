#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnvironmentalGlobalsScalarConversion : uint8_t {
    None = 0,
    EV100ToMultipler = 1,
    MultiplierToEV100 = 2,
    EEnvironmentalGlobalsScalarConversion_MAX = 3,
};
#pragma pack(pop)
