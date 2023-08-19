#pragma once
#include <cstdint>
#include "UAnimationProvider.hpp"
#pragma pack(push, 1)
class UAnimationProvider_Gender : public UAnimationProvider {
public:
    UAnimationProvider* MaleAnimation; // 0x28
    UAnimationProvider* FemaleAnimation; // 0x30
    static UAnimationProvider_Gender* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
