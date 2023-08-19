#pragma once
#include <cstdint>
#include "EAblCollisionBranchDetectionType.hpp"
#include "UAblTaskCondition.hpp"
class UClass;
#pragma pack(push, 1)
class UAblCollisionBranchCondition : public UAblTaskCondition {
public:
    EAblCollisionBranchDetectionType DetectionType; // 0x28
    char pad_29[0x3];
    float DotProductLowerBound; // 0x2c
    float DotProductUpperBound; // 0x30
    float BranchOnImminentCollisionLength; // 0x34
    float MinSpeed; // 0x38
    bool bCheckForInheritance; // 0x3c
    char pad_3d[0x3];
    TArray<UClass*> OtherActorMustBeA; // 0x40
    static UAblCollisionBranchCondition* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
