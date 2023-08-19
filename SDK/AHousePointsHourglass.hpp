#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AHousePointsHourglass : public AActor {
public:
    char pad_248[0x8];
    static AHousePointsHourglass* StaticClass();
    void UpdateFinalHouseScore();
    void CheckHousesScore();
}; // Size: 0x250
#pragma pack(pop)
