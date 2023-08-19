#pragma once
#include <cstdint>
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_Strafe : public UAblBlendSpaceParameterGetter {
public:
    float SpeedInterpSpeed; // 0x28
    float AngleInterpSpeed; // 0x2c
    static UAblBlendSpaceParameterGetter_Strafe* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
