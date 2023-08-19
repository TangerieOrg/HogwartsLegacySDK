#pragma once
#include <cstdint>
#include "AActor.hpp"
class ULightClippingPlanesComponent;
#pragma pack(push, 1)
class ALightClippingPlanes : public AActor {
public:
    ULightClippingPlanesComponent* LightClippingPlanesComponent; // 0x248
    static ALightClippingPlanes* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
