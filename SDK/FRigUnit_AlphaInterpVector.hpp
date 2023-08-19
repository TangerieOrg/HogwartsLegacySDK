#pragma once
#include <cstdint>
#include "FInputRange.hpp"
#include "FInputScaleBiasClamp.hpp"
#include "FRigUnit_SimBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase {
    FVector Value; // 0x8
    float Scale; // 0x14
    float Bias; // 0x18
    bool bMapRange; // 0x1c
    char pad_1d[0x3];
    FInputRange InRange; // 0x20
    FInputRange OutRange; // 0x28
    bool bClampResult; // 0x30
    char pad_31[0x3];
    float ClampMin; // 0x34
    float ClampMax; // 0x38
    bool bInterpResult; // 0x3c
    char pad_3d[0x3];
    float InterpSpeedIncreasing; // 0x40
    float InterpSpeedDecreasing; // 0x44
    FVector Result; // 0x48
    FInputScaleBiasClamp ScaleBiasClamp; // 0x54
    char pad_84[0x4];
}; // Size: 0x88
#pragma pack(pop)
