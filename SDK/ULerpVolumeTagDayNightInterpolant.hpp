#pragma once
#include <cstdint>
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeTagDayNightInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesTagName Name; // 0x28
    FString DayValue; // 0x30
    FString NightValue; // 0x40
    FName DayValueName; // 0x50
    FName NightValueName; // 0x58
    static ULerpVolumeTagDayNightInterpolant* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
