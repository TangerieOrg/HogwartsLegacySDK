#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase {
    FVector Value; // 0x8
    FVector SourceMinimum; // 0x14
    FVector SourceMaximum; // 0x20
    FVector TargetMinimum; // 0x2c
    FVector TargetMaximum; // 0x38
    bool bClamp; // 0x44
    char pad_45[0x3];
    FVector Result; // 0x48
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
