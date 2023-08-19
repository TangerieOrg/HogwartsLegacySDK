#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase {
    FVector Start; // 0x8
    FVector Direction; // 0x14
    FVector PlanePoint; // 0x20
    FVector PlaneNormal; // 0x2c
    FVector Result; // 0x38
    float Distance; // 0x44
}; // Size: 0x48
#pragma pack(pop)
