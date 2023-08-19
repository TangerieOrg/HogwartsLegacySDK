#pragma once
#include <cstdint>
#include "APhoenixTrackingVolume.hpp"
#pragma pack(push, 1)
class ARandomEncounterVolume : public APhoenixTrackingVolume {
public:
    FString EncounterDBName; // 0x2b8
    float SearchRadius; // 0x2c8
    char pad_2cc[0x4];
    static ARandomEncounterVolume* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
