#pragma once
#include <cstdint>
#include "FLerpVolumesVectorName.hpp"
#include "FVector.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeVectorDayNightInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesVectorName Name; // 0x28
    FVector DayValue; // 0x30
    FVector NightValue; // 0x3c
    static ULerpVolumeVectorDayNightInterpolant* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
