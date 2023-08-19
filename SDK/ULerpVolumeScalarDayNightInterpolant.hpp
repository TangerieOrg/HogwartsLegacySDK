#pragma once
#include <cstdint>
#include "FLerpVolumesScalarName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeScalarDayNightInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesScalarName Name; // 0x28
    float DayValue; // 0x30
    float NightValue; // 0x34
    static ULerpVolumeScalarDayNightInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
