#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#pragma pack(push, 1)
class UAnimTag_Direct : public UAnimationArchitectTagProvider {
public:
    FGameplayTagContainer Tags; // 0x28
    static UAnimTag_Direct* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
