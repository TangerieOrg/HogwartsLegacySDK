#pragma once
#include <cstdint>
#include "FStencilManagerEffectName.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolStencilEffectActive : public UFXAutoTriggerBool {
public:
    FStencilManagerEffectName Effect; // 0x28
    static UFXAutoTriggerBoolStencilEffectActive* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
