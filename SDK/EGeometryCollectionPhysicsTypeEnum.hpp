#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t {
    Chaos_AngularVelocity = 0,
    Chaos_DynamicState = 1,
    Chaos_LinearVelocity = 2,
    Chaos_InitialAngularVelocity = 3,
    Chaos_InitialLinearVelocity = 4,
    Chaos_CollisionGroup = 5,
    Chaos_LinearForce = 6,
    Chaos_AngularTorque = 7,
    Chaos_ExternalClusterStrain = 8,
    Chaos_InternalClusterStrain = 9,
    Chaos_Max = 10,
};
#pragma pack(pop)
