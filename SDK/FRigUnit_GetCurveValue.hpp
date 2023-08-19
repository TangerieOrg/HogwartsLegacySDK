#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetCurveValue : public FRigUnit {
    FName Curve; // 0x8
    float Value; // 0x10
    FCachedRigElement CachedCurveIndex; // 0x14
}; // Size: 0x28
#pragma pack(pop)
