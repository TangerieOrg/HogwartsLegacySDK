#pragma once
#include <cstdint>
#include "EStencilManagerEffectPriority.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarStencilEffectConstPriority : public UFXAutoTriggerScalar {
public:
    EStencilManagerEffectPriority Priority; // 0x28
    char pad_29[0x7];
    static UFXAutoTriggerScalarStencilEffectConstPriority* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
