#pragma once
#include <cstdint>
#include "UFlyingBroomPhysicsScratch.hpp"
class UFlyingBroomPhysics_Spline;
#pragma pack(push, 1)
class UFlyingBroomPhysicsScratch_Spline : public UFlyingBroomPhysicsScratch {
public:
    UFlyingBroomPhysics_Spline* PhysicsData; // 0x30
    char pad_38[0xc8];
    static UFlyingBroomPhysicsScratch_Spline* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
