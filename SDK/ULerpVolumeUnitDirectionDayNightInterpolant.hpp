#pragma once
#include <cstdint>
#include "FLerpVolumesUnitDirectionName.hpp"
#include "FVector.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeUnitDirectionDayNightInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesUnitDirectionName Name; // 0x28
    FVector DayValue; // 0x30
    FVector NightValue; // 0x3c
    static ULerpVolumeUnitDirectionDayNightInterpolant* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
