#pragma once
#include <cstdint>
#include "EAxis\Type.hpp"
#include "EControlRigClampSpatialMode\Type.hpp"
#include "FLinearColor.hpp"
#include "FRigUnit_MathVectorBase.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase {
    FVector Value; // 0x8
    EAxis::Type Axis; // 0x14
    EControlRigClampSpatialMode::Type Type; // 0x15
    char pad_16[0x2];
    float Minimum; // 0x18
    float Maximum; // 0x1c
    FTransform Space; // 0x20
    bool bDrawDebug; // 0x50
    char pad_51[0x3];
    FLinearColor DebugColor; // 0x54
    float DebugThickness; // 0x64
    FVector Result; // 0x68
    char pad_74[0xc];
}; // Size: 0x80
#pragma pack(pop)
