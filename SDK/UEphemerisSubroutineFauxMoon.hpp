#pragma once
#include <cstdint>
#include "FDateInput.hpp"
#include "UEphemerisSubroutine.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineFauxMoon : public UEphemerisSubroutine {
public:
    FDateInput IdealDate; // 0x28
    float BaseOffsetDegrees; // 0x34
    float OffsetVarianceDegrees; // 0x38
    float OffsetPeriodDays; // 0x3c
    float PhasePeriodDays; // 0x40
    bool bEnabled; // 0x44
    bool bOverride_PhasePeriodDays; // 0x45
    bool bUseIdealDate; // 0x46
    char pad_47[0x1];
    static UEphemerisSubroutineFauxMoon* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
