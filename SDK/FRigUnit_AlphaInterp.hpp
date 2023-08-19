#pragma once
#include <cstdint>
#include "FInputRange.hpp"
#include "FInputScaleBiasClamp.hpp"
#include "FRigUnit_SimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_AlphaInterp : public FRigUnit_SimBase {
    float Value; // 0x8
    float Scale; // 0xc
    float Bias; // 0x10
    bool bMapRange; // 0x14
    char pad_15[0x3];
    FInputRange InRange; // 0x18
    FInputRange OutRange; // 0x20
    bool bClampResult; // 0x28
    char pad_29[0x3];
    float ClampMin; // 0x2c
    float ClampMax; // 0x30
    bool bInterpResult; // 0x34
    char pad_35[0x3];
    float InterpSpeedIncreasing; // 0x38
    float InterpSpeedDecreasing; // 0x3c
    float Result; // 0x40
    FInputScaleBiasClamp ScaleBiasClamp; // 0x44
    char pad_74[0x4];
}; // Size: 0x78
#pragma pack(pop)
