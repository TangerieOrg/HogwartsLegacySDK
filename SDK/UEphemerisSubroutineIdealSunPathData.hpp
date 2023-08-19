#pragma once
#include <cstdint>
#include "FSolarDay.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineIdealSunPathData : public UObject {
public:
    FSolarDay SolarDay; // 0x28
    static UEphemerisSubroutineIdealSunPathData* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
