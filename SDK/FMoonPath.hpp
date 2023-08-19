#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FRuntimeCurveVector.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FMoonPath {
    FDateTime Date; // 0x0
    FRuntimeFloatCurve MoonAltitudeVsMoonAzimuth; // 0x8
    FRuntimeCurveVector MoonUpVsMoonAzimuth; // 0x90
    FRuntimeCurveVector MoonRightVsMoonAzimuth; // 0x218
    FRuntimeCurveVector MoonAzisVsMoonAltitude; // 0x3a0
}; // Size: 0x528
#pragma pack(pop)
