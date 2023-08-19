#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector_NetQuantize100.hpp"
#pragma pack(push, 1)
struct FRigidBodyState {
    FVector_NetQuantize100 Position; // 0x0
    char pad_c[0x4];
    FQuat Quaternion; // 0x10
    FVector_NetQuantize100 LinVel; // 0x20
    FVector_NetQuantize100 AngVel; // 0x2c
    uint8_t flags; // 0x38
    char pad_39[0x7];
}; // Size: 0x40
#pragma pack(pop)
