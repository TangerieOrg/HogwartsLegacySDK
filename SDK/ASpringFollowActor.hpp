#pragma once
#include <cstdint>
#include "AActor.hpp"
class USpringFollowComponent;
#pragma pack(push, 1)
class ASpringFollowActor : public AActor {
public:
    bool bSpringsActive; // 0x248
    char pad_249[0x3];
    float Damping; // 0x24c
    float RadialDamping; // 0x250
    char pad_254[0x4];
    USpringFollowComponent* SpringFollow; // 0x258
    static ASpringFollowActor* StaticClass();
    void ResetPhysics();
}; // Size: 0x260
#pragma pack(pop)
