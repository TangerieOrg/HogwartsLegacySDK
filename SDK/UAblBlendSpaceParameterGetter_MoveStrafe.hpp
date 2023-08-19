#pragma once
#include <cstdint>
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_MoveStrafe : public UAblBlendSpaceParameterGetter {
public:
    float MagnitudeInterpSpeed; // 0x28
    float AngleInterpSpeed; // 0x2c
    bool bBlendInputOnTransitionOut; // 0x30
    bool bUseVelocity; // 0x31
    char pad_32[0x6];
    static UAblBlendSpaceParameterGetter_MoveStrafe* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
