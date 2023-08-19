#pragma once
#include <cstdint>
#include "FRigUnit.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_ConvertRotationToVector : public FRigUnit {
    FRotator Input; // 0x8
    FVector Result; // 0x14
}; // Size: 0x20
#pragma pack(pop)
