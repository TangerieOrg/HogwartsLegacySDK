#pragma once
#include <cstdint>
#include "APhoenixTrackingVolume.hpp"
#pragma pack(push, 1)
class ARandomEncounterExclusionVolume : public APhoenixTrackingVolume {
public:
    static ARandomEncounterExclusionVolume* StaticClass();
}; // Size: 0x2b8
#pragma pack(pop)
