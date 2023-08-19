#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetControlVector2D : public FRigUnitMutable {
    FName Control; // 0x68
    float weight; // 0x70
    FVector2D Vector; // 0x74
    FCachedRigElement CachedControlIndex; // 0x7c
}; // Size: 0x90
#pragma pack(pop)
