#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_AccumulateTransformLerp : public FRigUnit_SimBase {
    char pad_8[0x8];
    FTransform TargetValue; // 0x10
    FTransform InitialValue; // 0x40
    float Blend; // 0x70
    bool bIntegrateDeltaTime; // 0x74
    char pad_75[0xb];
    FTransform Result; // 0x80
    FTransform AccumulatedValue; // 0xb0
}; // Size: 0xe0
#pragma pack(pop)
