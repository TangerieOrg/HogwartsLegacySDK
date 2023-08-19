#pragma once
#include <cstdint>
#include "FStencilManagerGroupName.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolStencilEffectGroupActive : public UFXAutoTriggerBool {
public:
    FStencilManagerGroupName Group; // 0x28
    static UFXAutoTriggerBoolStencilEffectGroupActive* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
