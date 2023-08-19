#pragma once
#include <cstdint>
#include "FActiveTimeDilationEffect.hpp"
#pragma pack(push, 1)
struct FActiveTimeDilationEffectGroup {
    TArray<FActiveTimeDilationEffect> ActiveEffects; // 0x0
    int32_t CounterDilationEnabledCount; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
