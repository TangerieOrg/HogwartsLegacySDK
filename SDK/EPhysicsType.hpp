#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EPhysicsType : uint8_t {
    PhysType_Default = 0,
    PhysType_Kinematic = 1,
    PhysType_Simulated = 2,
    PhysType_MAX = 3,
};
#pragma pack(pop)
