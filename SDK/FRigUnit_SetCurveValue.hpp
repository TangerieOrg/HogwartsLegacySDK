#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetCurveValue : public FRigUnitMutable {
    FName Curve; // 0x68
    float Value; // 0x70
    FCachedRigElement CachedCurveIndex; // 0x74
}; // Size: 0x88
#pragma pack(pop)
