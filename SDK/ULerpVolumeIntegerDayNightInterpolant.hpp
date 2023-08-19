#pragma once
#include <cstdint>
#include "FLerpVolumesIntegerName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeIntegerDayNightInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesIntegerName Name; // 0x28
    int32_t DayValue; // 0x30
    int32_t NightValue; // 0x34
    static ULerpVolumeIntegerDayNightInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
