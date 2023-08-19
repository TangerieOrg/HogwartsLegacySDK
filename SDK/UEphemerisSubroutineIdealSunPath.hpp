#pragma once
#include <cstdint>
#include "FDateInput.hpp"
#include "UEphemerisSubroutine.hpp"
class UEphemerisSubroutineGamifyTime;
class UCurveFloat;
#pragma pack(push, 1)
class UEphemerisSubroutineIdealSunPath : public UEphemerisSubroutine {
public:
    FDateInput IdealDate; // 0x28
    char pad_34[0x4];
    UEphemerisSubroutineGamifyTime* GamifyTime; // 0x38
    UCurveFloat* RemapNormalizedTime; // 0x40
    bool bEnabled; // 0x48
    bool bUseRemapNormalizedTime; // 0x49
    bool bRemapNormalizedTimeIs12Hour; // 0x4a
    char pad_4b[0x5];
    static UEphemerisSubroutineIdealSunPath* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
