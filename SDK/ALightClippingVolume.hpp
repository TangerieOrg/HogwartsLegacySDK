#pragma once
#include <cstdint>
#include "AVolume.hpp"
class ULightClippingVolumeComponent;
#pragma pack(push, 1)
class ALightClippingVolume : public AVolume {
public:
    ULightClippingVolumeComponent* LightClippingComponent; // 0x280
    static ALightClippingVolume* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
