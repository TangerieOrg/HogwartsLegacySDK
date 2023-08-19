#pragma once
#include <cstdint>
#include "EAlphaBlendOption.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNpcReactAnimRateModifierTask : public UAblAbilityTask {
public:
    float TargetValue; // 0x70
    EAlphaBlendOption AlphaBlendOption; // 0x74
    char pad_75[0x3];
    static UAblNpcReactAnimRateModifierTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
