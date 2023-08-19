#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UActorProvider;
class UPhysicsAsset;
#pragma pack(push, 1)
class USceneAction_ClothCollision : public USceneRigObjectActionBase {
public:
    UActorProvider* CollisionActor; // 0xa0
    UPhysicsAsset* PhysicsAsset; // 0xa8
    static USceneAction_ClothCollision* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
