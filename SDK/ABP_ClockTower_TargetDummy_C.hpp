#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class UObjectStateComponent;
#pragma pack(push, 1)
class ABP_ClockTower_TargetDummy_C : public AActor {
public:
    UStaticMeshComponent* Sphere; // 0x248
    UObjectStateComponent* ObjectState; // 0x250
    static ABP_ClockTower_TargetDummy_C* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
