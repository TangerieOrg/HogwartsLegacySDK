#pragma once
#include <cstdint>
#include "UAnimationArchitectTagProvider.hpp"
#pragma pack(push, 1)
class UAnimTag_FallbackChain : public UAnimationArchitectTagProvider {
public:
    TArray<UAnimationArchitectTagProvider*> Entries; // 0x28
    static UAnimTag_FallbackChain* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
