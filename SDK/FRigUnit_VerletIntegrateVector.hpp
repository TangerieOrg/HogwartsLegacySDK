#pragma once
#include <cstdint>
#include "FCRSimPoint.hpp"
#include "FRigUnit_SimBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase {
    FVector Target; // 0x8
    float Strength; // 0x14
    float Damp; // 0x18
    float Blend; // 0x1c
    FVector Position; // 0x20
    FVector Velocity; // 0x2c
    FVector Acceleration; // 0x38
    FCRSimPoint Point; // 0x44
    bool bInitialized; // 0x6c
    char pad_6d[0x3];
}; // Size: 0x70
#pragma pack(pop)
