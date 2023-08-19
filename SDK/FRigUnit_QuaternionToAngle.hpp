#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_QuaternionToAngle : public FRigUnit {
    FVector Axis; // 0x8
    char pad_14[0xc];
    FQuat Argument; // 0x20
    float Angle; // 0x30
    char pad_34[0xc];
}; // Size: 0x40
#pragma pack(pop)
