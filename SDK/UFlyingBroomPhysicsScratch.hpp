#pragma once
#include <cstdint>
#include "UObject.hpp"
class UFlyingBroomMovementComponent;
#pragma pack(push, 1)
class UFlyingBroomPhysicsScratch : public UObject {
public:
    UFlyingBroomMovementComponent* MovementComponent; // 0x28
    static UFlyingBroomPhysicsScratch* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
