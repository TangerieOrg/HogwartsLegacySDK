#pragma once
#include <cstdint>
#include "ECRSimConstraintType.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCRSimPointConstraint {
    ECRSimConstraintType Type; // 0x0
    char pad_1[0x3];
    int32_t SubjectA; // 0x4
    int32_t SubjectB; // 0x8
    FVector DataA; // 0xc
    FVector DataB; // 0x18
}; // Size: 0x24
#pragma pack(pop)
