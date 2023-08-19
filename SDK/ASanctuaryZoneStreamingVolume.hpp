#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class ASanctuaryZoneStreamingVolume : public AVolume {
public:
    FName ZoneName; // 0x280
    static ASanctuaryZoneStreamingVolume* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
