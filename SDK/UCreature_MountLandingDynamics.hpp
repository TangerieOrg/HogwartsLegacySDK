#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCreature_MountLandingDynamics : public UDataAsset {
public:
    char pad_30[0x50];
    float LandingMaxAcceleration; // 0x80
    char pad_84[0x4];
    static UCreature_MountLandingDynamics* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
