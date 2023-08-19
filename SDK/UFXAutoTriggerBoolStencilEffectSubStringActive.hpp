#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolStencilEffectSubStringActive : public UFXAutoTriggerBool {
public:
    FString EffectSubString; // 0x28
    static UFXAutoTriggerBoolStencilEffectSubStringActive* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
