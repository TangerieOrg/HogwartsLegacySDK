#pragma once
#include <cstdint>
#include "FFixedSunPositionInput.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UFixedSunPositions : public UDataAsset {
public:
    float TransitionTime; // 0x30
    float TransitionEaseInOutPower; // 0x34
    TArray<FFixedSunPositionInput> SunAltitudes; // 0x38
    float SunriseDurationMinutes; // 0x48
    float NoonDurationHours; // 0x4c
    float SunsetDurationMinutes; // 0x50
    float MidnightDurationHours; // 0x54
    bool bNoonDuration; // 0x58
    bool bSunriseDuration; // 0x59
    bool bMidnightDuration; // 0x5a
    bool bSunsetDuration; // 0x5b
    char pad_5c[0x4];
    static UFixedSunPositions* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
