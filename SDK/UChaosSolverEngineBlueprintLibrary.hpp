#pragma once
#include <cstdint>
#include "FHitResult.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FChaosPhysicsCollisionInfo;
#pragma pack(push, 1)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UChaosSolverEngineBlueprintLibrary* StaticClass();
    static FHitResult ConvertPhysicsCollisionToHitResult(FChaosPhysicsCollisionInfo& PhysicsCollision);
}; // Size: 0x28
#pragma pack(pop)
