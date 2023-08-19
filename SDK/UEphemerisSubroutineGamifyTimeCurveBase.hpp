#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UEphemerisSubroutineGamifyTime.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineGamifyTimeCurveBase : public UEphemerisSubroutineGamifyTime {
public:
    FRuntimeFloatCurve ToNormalizedTime; // 0x28
    static UEphemerisSubroutineGamifyTimeCurveBase* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
