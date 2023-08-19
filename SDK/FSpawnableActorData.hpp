#pragma once
#include <cstdint>
#include "ESpawnOnFloorTestType.hpp"
#include "FBoxSphereBounds.hpp"
#include "FRotator.hpp"
class UClass;
#pragma pack(push, 1)
struct FSpawnableActorData {
    UClass* ActorClass; // 0x0
    FBoxSphereBounds ActorBounds; // 0x8
    bool bSpawnOnNavMesh; // 0x24
    bool bForceSpawnOnFloor; // 0x25
    ESpawnOnFloorTestType SpawnOnFloorTest; // 0x26
    char pad_27[0x1];
    float FloorSweepDistanceZ; // 0x28
    float NavSearchRadius; // 0x2c
    FRotator InitialRotation; // 0x30
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
