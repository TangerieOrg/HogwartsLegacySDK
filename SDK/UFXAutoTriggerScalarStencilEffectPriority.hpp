#pragma once
#include <cstdint>
#include "FStencilManagerEffectName.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarStencilEffectPriority : public UFXAutoTriggerScalar {
public:
    FStencilManagerEffectName Effect; // 0x28
    static UFXAutoTriggerScalarStencilEffectPriority* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
