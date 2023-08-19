#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_ToSwingAndTwist : public FRigUnit {
    char pad_8[0x8];
    FQuat Input; // 0x10
    FVector TwistAxis; // 0x20
    char pad_2c[0x4];
    FQuat Swing; // 0x30
    FQuat Twist; // 0x40
}; // Size: 0x50
#pragma pack(pop)
