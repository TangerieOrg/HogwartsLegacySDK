#pragma once
#include <cstdint>
#include "FKIKBone.hpp"
#include "UAblAnimationModifier.hpp"
#pragma pack(push, 1)
class UAblAnimationModifier_SpeedWarping : public UAblAnimationModifier {
public:
    TArray<FKIKBone> FKIKBranches; // 0x28
    static UAblAnimationModifier_SpeedWarping* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
