#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FRigUnit_ConvertRotation : public FRigUnit {
    FRotator Input; // 0x8
    char pad_14[0xc];
    FQuat Result; // 0x20
}; // Size: 0x30
#pragma pack(pop)
