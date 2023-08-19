#pragma once
#include <cstdint>
#include "EBroomEnemyState\Type.hpp"
class USplineComponent;
class UFlyingBroomPhysics_Spline;
class UClass;
class AFlyingBroom;
#pragma pack(push, 1)
struct FSpawnedStudent {
    USplineComponent* BroomSpline; // 0x0
    UFlyingBroomPhysics_Spline* PhysicsData; // 0x8
    char pad_10[0x28];
    UClass* FlyingBroom; // 0x38
    float MaxSpeed; // 0x40
    EBroomEnemyState::Type SpawnState; // 0x44
    char pad_45[0x3];
    AFlyingBroom* SpawnedFlyingBroom; // 0x48
}; // Size: 0x50
#pragma pack(pop)
