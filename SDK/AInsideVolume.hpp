#pragma once
#include <cstdint>
#include "AVolume.hpp"
class UAvaInsideVolumeComponent;
#pragma pack(push, 1)
class AInsideVolume : public AVolume {
public:
    UAvaInsideVolumeComponent* InsideVolumeComponent; // 0x280
    static AInsideVolume* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
