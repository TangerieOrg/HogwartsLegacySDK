#pragma once
#include <cstdint>
#include "UFlyingBroomPhysicsScratch.hpp"
class UFlyingBroomPhysics_FreeRoam;
class UFlyingBroomStats;
#pragma pack(push, 1)
class UFlyingBroomPhysicsScratch_FreeRoam : public UFlyingBroomPhysicsScratch {
public:
    char pad_30[0x20];
    UFlyingBroomPhysics_FreeRoam* PhysicsData; // 0x50
    UFlyingBroomStats* StatsData; // 0x58
    char pad_60[0xd8];
    static UFlyingBroomPhysicsScratch_FreeRoam* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
