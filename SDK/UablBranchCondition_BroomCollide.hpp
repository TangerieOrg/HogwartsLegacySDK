#pragma once
#include <cstdint>
#include "EFlyingBroomHitObjectType.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UablBranchCondition_BroomCollide : public UAblBranchCondition {
public:
    EFlyingBroomHitObjectType FlyingBroomCheckHitObject; // 0x30
    char pad_31[0x7];
    static UablBranchCondition_BroomCollide* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
