#pragma once
#include <cstdint>
#include "FPBRValidationProfileRange.hpp"
#pragma pack(push, 1)
struct FDefaultPBRValidationProfile {
    FPBRValidationProfileRange LuminanceMetallicRange; // 0x0
    FPBRValidationProfileRange LuminanceDielectricRange; // 0x8
}; // Size: 0x10
#pragma pack(pop)
