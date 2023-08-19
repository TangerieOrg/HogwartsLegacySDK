#pragma once
#include <cstdint>
#include "FConstraintDescription.hpp"
#pragma pack(push, 1)
struct FTransformConstraint {
    FConstraintDescription Operator; // 0x0
    char pad_d[0x3];
    FName SourceNode; // 0x10
    FName TargetNode; // 0x18
    float weight; // 0x20
    bool bMaintainOffset; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
