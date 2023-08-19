#pragma once
#include <cstdint>
#include "AActor.hpp"
class ULightCullingComponent;
#pragma pack(push, 1)
class ALightCullingPlanes : public AActor {
public:
    ULightCullingComponent* LightCullingPlanesComponent; // 0x248
    static ALightCullingPlanes* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
