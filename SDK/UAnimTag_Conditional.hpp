#pragma once
#include <cstdint>
#include "UAnimationArchitectTagProvider.hpp"
class UBoolProvider;
#pragma pack(push, 1)
class UAnimTag_Conditional : public UAnimationArchitectTagProvider {
public:
    UBoolProvider* Condition; // 0x28
    UAnimationArchitectTagProvider* TagProvider; // 0x30
    static UAnimTag_Conditional* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
