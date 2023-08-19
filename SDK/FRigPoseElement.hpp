#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigPoseElement {
    FCachedRigElement Index; // 0x0
    char pad_14[0xc];
    FTransform GlobalTransform; // 0x20
    FTransform LocalTransform; // 0x50
    float CurveValue; // 0x80
    char pad_84[0xc];
}; // Size: 0x90
#pragma pack(pop)
