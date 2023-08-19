#pragma once
#include <cstdint>
#include "UAnimationProvider.hpp"
class UBoolProvider;
#pragma pack(push, 1)
class UAnimationProvider_Conditional : public UAnimationProvider {
public:
    UBoolProvider* Condition; // 0x28
    UAnimationProvider* AnimationIfTrue; // 0x30
    UAnimationProvider* AnimationIfFalse; // 0x38
    static UAnimationProvider_Conditional* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
