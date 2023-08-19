#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EWISMCNumCustomDataFloat : uint8_t {
    WNumCDF_None = 0,
    WNumCDF_4Floats = 1,
    WNumCDF_8Floats = 2,
    WNumCDF_12Floats = 3,
    WNumCDF_16Floats = 4,
    WNumCDF_MAX = 5,
};
#pragma pack(pop)
