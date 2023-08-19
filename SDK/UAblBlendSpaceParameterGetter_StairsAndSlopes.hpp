#pragma once
#include <cstdint>
#include "EStairsDirectionState\Type.hpp"
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_StairsAndSlopes : public UAblBlendSpaceParameterGetter {
public:
    EStairsDirectionState::Type StairsDirection; // 0x28
    char pad_29[0x3];
    float MinSlope; // 0x2c
    float MaxSlope; // 0x30
    bool bBlendInputOnTransitionOut; // 0x34
    bool bUseVelocity; // 0x35
    char pad_36[0x2];
    static UAblBlendSpaceParameterGetter_StairsAndSlopes* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
