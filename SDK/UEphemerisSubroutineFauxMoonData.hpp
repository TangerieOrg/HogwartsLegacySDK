#pragma once
#include <cstdint>
#include "FEphemerisDayInfo.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineFauxMoonData : public UObject {
public:
    FEphemerisDayInfo IdealDayInfo; // 0x28
    static UEphemerisSubroutineFauxMoonData* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
