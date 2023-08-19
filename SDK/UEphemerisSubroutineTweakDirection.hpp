#pragma once
#include <cstdint>
#include "UEphemerisSubroutine.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UEphemerisSubroutineTweakDirection : public UEphemerisSubroutine {
public:
    float TweakAltitude; // 0x28
    float TweakAzimuth; // 0x2c
    UCurveFloat* NormalizedTimeBlend; // 0x30
    static UEphemerisSubroutineTweakDirection* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
