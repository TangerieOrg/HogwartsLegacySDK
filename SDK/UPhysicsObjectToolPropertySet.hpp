#pragma once
#include <cstdint>
#include "ECollisionGeometryMode.hpp"
#include "FPhysicsBoxData.hpp"
#include "FPhysicsCapsuleData.hpp"
#include "FPhysicsConvexData.hpp"
#include "FPhysicsSphereData.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet {
public:
    FString ObjectName; // 0x60
    ECollisionGeometryMode CollisionType; // 0x70
    char pad_74[0x4];
    TArray<FPhysicsSphereData> Spheres; // 0x78
    TArray<FPhysicsBoxData> Boxes; // 0x88
    TArray<FPhysicsCapsuleData> Capsules; // 0x98
    TArray<FPhysicsConvexData> Convexes; // 0xa8
    static UPhysicsObjectToolPropertySet* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
