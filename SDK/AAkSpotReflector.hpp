#pragma once
#include <cstdint>
#include "AActor.hpp"
class UAkAuxBus;
class UAkAcousticTexture;
#pragma pack(push, 1)
class AAkSpotReflector : public AActor {
public:
    UAkAuxBus* EarlyReflectionAuxBus; // 0x248
    FString EarlyReflectionAuxBusName; // 0x250
    UAkAcousticTexture* AcousticTexture; // 0x260
    float DistanceScalingFactor; // 0x268
    float Level; // 0x26c
    static AAkSpotReflector* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
