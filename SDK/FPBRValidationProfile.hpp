#pragma once
#include <cstdint>
#include "FPBRValidationProfileRange.hpp"
#pragma pack(push, 1)
struct FPBRValidationProfile {
    FString Name; // 0x0
    FPBRValidationProfileRange MetalnessRange; // 0x10
    FPBRValidationProfileRange LuminanceRange; // 0x18
}; // Size: 0x20
#pragma pack(pop)
