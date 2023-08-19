#pragma once
#include <cstdint>
#include "EAnimationDirections.hpp"
#include "FIKTaskReferenceProperty.hpp"
#pragma pack(push, 1)
struct FIKDriver_AimAtControl {
    FIKTaskReferenceProperty Task; // 0x0
    EAnimationDirections DirectionDriver; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
