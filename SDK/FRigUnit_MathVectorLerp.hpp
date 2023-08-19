#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase {
    FVector A; // 0x8
    FVector B; // 0x14
    float T; // 0x20
    FVector Result; // 0x24
}; // Size: 0x30
#pragma pack(pop)
