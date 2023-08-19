#pragma once
#include <cstdint>
#include "EBodyCollisionResponse\Type.hpp"
#include "ECollisionTraceFlag.hpp"
#include "EPhysicsType.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UBodySetupCore : public UObject {
public:
    FName BoneName; // 0x28
    EPhysicsType PhysicsType; // 0x30
    ECollisionTraceFlag CollisionTraceFlag; // 0x31
    EBodyCollisionResponse::Type CollisionReponse; // 0x32
    char pad_33[0x5];
    static UBodySetupCore* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
