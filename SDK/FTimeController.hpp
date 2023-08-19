#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FTimeLerp.hpp"
class UTimeSource;
#pragma pack(push, 1)
struct FTimeController {
    UTimeSource* TimeDateSource; // 0x0
    FDateTime FilteredTime; // 0x8
    FTimeLerp TimeTransition; // 0x10
    float RateTarget; // 0xa8
    float RateFilter; // 0xac
}; // Size: 0xb0
#pragma pack(pop)
