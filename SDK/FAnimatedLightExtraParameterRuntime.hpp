#pragma once
#include <cstdint>
#include "FAnimatedLightExtraParameter.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FAnimatedLightExtraParameterRuntime : public FAnimatedLightExtraParameter {
    char pad_10[0x8];
    FLinearColor LastValue; // 0x18
}; // Size: 0x28
#pragma pack(pop)
