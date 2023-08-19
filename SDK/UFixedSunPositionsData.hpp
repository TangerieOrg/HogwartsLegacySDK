#pragma once
#include <cstdint>
#include "FEphemerisDayInfo.hpp"
#include "FFixedSunPosition.hpp"
#include "FTimespan.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UFixedSunPositionsData : public UObject {
public:
    FEphemerisDayInfo DayInfo; // 0x28
    TArray<FFixedSunPosition> Positions; // 0xa0
    FTimespan TransitionTime; // 0xb0
    float TransitionEaseInOutPower; // 0xb8
    char pad_bc[0x4];
    static UFixedSunPositionsData* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
