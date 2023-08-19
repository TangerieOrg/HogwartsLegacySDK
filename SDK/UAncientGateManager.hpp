#pragma once
#include <cstdint>
#include "ECollisionResponse.hpp"
#include "UObject.hpp"
class AActor;
class UActorComponent;
#pragma pack(push, 1)
class UAncientGateManager : public UObject {
public:
    static UAncientGateManager* StaticClass();
    static void SetAncientGateCollision(AActor* Actor, ECollisionResponse CollisionResponse);
    static void GetAncientGatePrimitives(AActor* Actor, TArray<UActorComponent*>& Primitives);
    static UAncientGateManager* Get();
}; // Size: 0x28
#pragma pack(pop)
