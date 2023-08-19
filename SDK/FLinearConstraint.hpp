#pragma once
#include <cstdint>
#include "ELinearConstraintMotion.hpp"
#include "FConstraintBaseParams.hpp"
#pragma pack(push, 1)
struct FLinearConstraint : public FConstraintBaseParams {
    float Limit; // 0x14
    ELinearConstraintMotion XMotion; // 0x18
    ELinearConstraintMotion YMotion; // 0x19
    ELinearConstraintMotion ZMotion; // 0x1a
    char pad_1b[0x1];
}; // Size: 0x1c
#pragma pack(pop)
