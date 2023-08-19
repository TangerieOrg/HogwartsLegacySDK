#pragma once
#include <cstdint>
#include "EAxis\Type.hpp"
#include "EControlRigClampSpatialMode\Type.hpp"
#include "FLinearColor.hpp"
#include "FRigUnit_MathTransformBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase {
    char pad_8[0x8];
    FTransform Value; // 0x10
    EAxis::Type Axis; // 0x40
    EControlRigClampSpatialMode::Type Type; // 0x41
    char pad_42[0x2];
    float Minimum; // 0x44
    float Maximum; // 0x48
    char pad_4c[0x4];
    FTransform Space; // 0x50
    bool bDrawDebug; // 0x80
    char pad_81[0x3];
    FLinearColor DebugColor; // 0x84
    float DebugThickness; // 0x94
    char pad_98[0x8];
    FTransform Result; // 0xa0
}; // Size: 0xd0
#pragma pack(pop)
