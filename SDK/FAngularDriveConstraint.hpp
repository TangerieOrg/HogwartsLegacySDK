#pragma once
#include <cstdint>
#include "EAngularDriveMode\Type.hpp"
#include "FConstraintDrive.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAngularDriveConstraint {
    FConstraintDrive TwistDrive; // 0x0
    FConstraintDrive SwingDrive; // 0x10
    FConstraintDrive SlerpDrive; // 0x20
    FRotator OrientationTarget; // 0x30
    FVector AngularVelocityTarget; // 0x3c
    EAngularDriveMode::Type AngularDriveMode; // 0x48
    char pad_49[0x3];
}; // Size: 0x4c
#pragma pack(pop)
