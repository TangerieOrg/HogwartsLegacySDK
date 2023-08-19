#pragma once
#include <cstdint>
#include "AActor.hpp"
class UBillboardComponent;
class UCapsuleComponent;
#pragma pack(push, 1)
class ABP_PawnCollisionActor_Capsule_C : public AActor {
public:
    UBillboardComponent* Billboard; // 0x248
    UCapsuleComponent* CollisionCapsule; // 0x250
    float Capsule_Half_Height; // 0x258
    float Capsule_Radius; // 0x25c
    static ABP_PawnCollisionActor_Capsule_C* StaticClass();
    void UserConstructionScript0();
}; // Size: 0x260
#pragma pack(pop)
