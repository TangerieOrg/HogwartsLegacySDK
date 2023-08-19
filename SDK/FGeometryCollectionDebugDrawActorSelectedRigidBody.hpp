#pragma once
#include <cstdint>
class AChaosSolverActor;
class AGeometryCollectionActor;
#pragma pack(push, 1)
struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
    int32_t ID; // 0x0
    char pad_4[0x4];
    AChaosSolverActor* Solver; // 0x8
    AGeometryCollectionActor* GeometryCollection; // 0x10
}; // Size: 0x18
#pragma pack(pop)
