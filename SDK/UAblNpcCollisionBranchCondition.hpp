#pragma once
#include <cstdint>
#include "EAblNpcCollisionDetectionType.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblNpcCollisionBranchCondition : public UAblBranchCondition {
public:
    EAblNpcCollisionDetectionType DetectionType; // 0x30
    char pad_31[0x3];
    float DotProductLowerBound; // 0x34
    float DotProductUpperBound; // 0x38
    float BranchOnImminentCollisionLength; // 0x3c
    float MinSpeed; // 0x40
    char pad_44[0x4];
    static UAblNpcCollisionBranchCondition* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
