#pragma once
#include <cstdint>
#include "ARigidBodyBase.hpp"
class UPhysicsConstraintComponent;
class AActor;
#pragma pack(push, 1)
class APhysicsConstraintActor : public ARigidBodyBase {
public:
    UPhysicsConstraintComponent* ConstraintComp; // 0x248
    AActor* ConstraintActor1; // 0x250
    AActor* ConstraintActor2; // 0x258
    uint8_t bDisableCollision : 1; // 0x260
    uint8_t pad_bitfield_260_1 : 7;
    char pad_261[0x7];
    static APhysicsConstraintActor* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
