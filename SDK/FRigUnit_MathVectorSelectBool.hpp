#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase {
    bool Condition; // 0x8
    char pad_9[0x3];
    FVector IfTrue; // 0xc
    FVector IfFalse; // 0x18
    FVector Result; // 0x24
}; // Size: 0x30
#pragma pack(pop)
