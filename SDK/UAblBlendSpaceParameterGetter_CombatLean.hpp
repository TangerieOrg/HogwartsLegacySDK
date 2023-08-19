#pragma once
#include <cstdint>
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_CombatLean : public UAblBlendSpaceParameterGetter {
public:
    float MinValue; // 0x28
    float MaxValue; // 0x2c
    static UAblBlendSpaceParameterGetter_CombatLean* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
