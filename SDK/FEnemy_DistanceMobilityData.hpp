#pragma once
#include <cstdint>
#include "FEnemy_MobilityData.hpp"
#pragma pack(push, 1)
struct FEnemy_DistanceMobilityData : public FEnemy_MobilityData {
    float DistanceMin; // 0x40
    float DistanceMax; // 0x44
}; // Size: 0x48
#pragma pack(pop)
