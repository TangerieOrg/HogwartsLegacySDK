#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EPointOfInterestState.hpp"
#include "FDbSingleColumnInfo.hpp"
#pragma pack(push, 1)
class APointOfInterestMarkup : public AActor {
public:
    FDbSingleColumnInfo PointOfInterestId; // 0x248
    float DiscoverDistance; // 0x2d0
    EPointOfInterestState State; // 0x2d4
    char pad_2d5[0x3];
    static APointOfInterestMarkup* StaticClass();
}; // Size: 0x2d8
#pragma pack(pop)
