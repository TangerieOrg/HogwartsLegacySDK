#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_AccumulateTransformMul : public FRigUnit_SimBase {
    char pad_8[0x8];
    FTransform Multiplier; // 0x10
    FTransform InitialValue; // 0x40
    bool bFlipOrder; // 0x70
    bool bIntegrateDeltaTime; // 0x71
    char pad_72[0xe];
    FTransform Result; // 0x80
    FTransform AccumulatedValue; // 0xb0
}; // Size: 0xe0
#pragma pack(pop)
