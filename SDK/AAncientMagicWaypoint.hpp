#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class AAncientMagicWaypoint : public AActor {
public:
    char pad_248[0x10];
    static AAncientMagicWaypoint* StaticClass();
    void TrackFootPlants();
    void StopTrackingFootPlants();
    void FootPlantOccurred(FVector FootLocation, FRotator FootRotator);
}; // Size: 0x258
#pragma pack(pop)
