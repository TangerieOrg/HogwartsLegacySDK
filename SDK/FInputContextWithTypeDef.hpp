#pragma once
#include <cstdint>
#include "EInputContextLogicType\Type.hpp"
#pragma pack(push, 1)
struct FInputContextWithTypeDef {
    FName ContextName; // 0x0
    EInputContextLogicType::Type ContextLogicType; // 0x8
    bool bInitialValue; // 0x9
    bool bDebugValueChange; // 0xa
    char pad_b[0x1];
}; // Size: 0xc
#pragma pack(pop)
