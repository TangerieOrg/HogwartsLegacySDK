#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase {
    FVector Value; // 0x8
    FVector Result; // 0x14
}; // Size: 0x20
#pragma pack(pop)
