#pragma once
#include <cstdint>
#include "AActor.hpp"
class UWaterCollisionComponent;
#pragma pack(push, 1)
class ABP_WaterDummyCollision_C : public AActor {
public:
    UWaterCollisionComponent* WaterCollision; // 0x248
    static ABP_WaterDummyCollision_C* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
