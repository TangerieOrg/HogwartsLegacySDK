#pragma once
#include <cstdint>
#include "FLerpVolumesColorName.hpp"
#include "FLinearColor.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeColorDayNightInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesColorName Name; // 0x28
    FLinearColor DayValue; // 0x30
    FLinearColor NightValue; // 0x40
    static ULerpVolumeColorDayNightInterpolant* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
