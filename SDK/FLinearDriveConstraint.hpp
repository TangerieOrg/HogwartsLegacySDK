#pragma once
#include <cstdint>
#include "FConstraintDrive.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FLinearDriveConstraint {
    FVector PositionTarget; // 0x0
    FVector VelocityTarget; // 0xc
    FConstraintDrive XDrive; // 0x18
    FConstraintDrive YDrive; // 0x28
    FConstraintDrive ZDrive; // 0x38
    uint8_t bEnablePositionDrive : 1; // 0x48
    uint8_t pad_bitfield_48_1 : 7;
    char pad_49[0x3];
}; // Size: 0x4c
#pragma pack(pop)
